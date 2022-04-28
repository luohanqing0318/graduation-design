#include "opengl_widget.h"

const unsigned int TIMEOUTSECOND = 50;

unsigned int VAO, VBO, lightVAO;
unsigned int FBO, depthMap;

QVector3D light_position(1.2f, 1.0f, 2.0f);
QVector3D light_color(1.0f, 1.0f, 1.0f);
QVector3D object_color(1.0f, 0.5f, 0.31f);
QVector3D view_auto_positon(0.0,5.0,0.0);


OpenGL_Widget::OpenGL_Widget(QWidget *parent) : QOpenGLWidget(parent)
{
    connect(&m_timer,SIGNAL(timeout()),this,SLOT(OnTimeout()));
    m_timer.start(TIMEOUTSECOND);
    m_time.start();
    m_camera.Position = view_auto_positon;
    setFocusPolicy(Qt::StrongFocus);
}

OpenGL_Widget::~OpenGL_Widget()
{
      makeCurrent();
      glDeleteBuffers(1,&VBO);
      glDeleteVertexArrays(1,&VAO);
      glDeleteVertexArrays(1,&lightVAO);
      doneCurrent();
}

void OpenGL_Widget::LoadModel(string path)
{
    if(m_model != nullptr)
    {
        delete m_model;
    }
    m_model = nullptr;
    makeCurrent();
    m_model = new Model(QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_3_3_Core>(),
                        path.c_str());
    m_camera.Position = CameraPositionAuto(m_model->m_max_Y, m_model->m_min_Y);
    doneCurrent();
}



void OpenGL_Widget::initializeGL()
{
      initializeOpenGLFunctions();

      bool success;
      m_shaderprogram.addShaderFromSourceFile(QOpenGLShader::Vertex,":/shaders/glsl/v_demo.glsl");
      m_shaderprogram.addShaderFromSourceFile(QOpenGLShader::Fragment,":/shaders/glsl/f_demo.glsl");
      success=m_shaderprogram.link();
      if(!success) qDebug()<<"ERR:"<<m_shaderprogram.log();

      m_shaderprogram.bind();


      m_light_shaderProgram.addShaderFromSourceFile(QOpenGLShader::Vertex,":/shaders/glsl/v_light.glsl");
      m_light_shaderProgram.addShaderFromSourceFile(QOpenGLShader::Fragment,":/shaders/glsl/f_light.glsl");

      success=m_light_shaderProgram.link();
      if(!success) qDebug()<<"ERR:"<<m_light_shaderProgram.log();



}

void OpenGL_Widget::resizeGL(int w, int h)
{
    Q_UNUSED(w);
    Q_UNUSED(h);
}

void OpenGL_Widget::paintGL()
{
       if(m_model == nullptr)
       {
           return;
       }
       QMatrix4x4 model;
       QMatrix4x4 view;
       QMatrix4x4 projection;
       //float time=m_time.elapsed()/50.0;
       projection.perspective(m_camera.Zoom,(float)width()/height(),0.1,100);
       view=m_camera.GetViewMatrix();
       glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
       glEnable(GL_DEPTH_TEST);
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
       model.scale(0.2);



       m_shaderprogram.bind();
       m_shaderprogram.setUniformValue("projection_matrix", projection);
       m_shaderprogram.setUniformValue("view_matrix", view);

       //model.rotate(time, 5.0f, 5.0f, 0.5f);

       m_shaderprogram.setUniformValue("view_position",m_camera.Position);
       // light properties, note that all light colors are set at full intensity
       m_shaderprogram.setUniformValue("light.direction", -0.2f, -1.0f, -0.3f);
       m_shaderprogram.setUniformValue("light.ambient", 0.4f, 0.4f, 0.4f);
       m_shaderprogram.setUniformValue("light.diffuse", 0.2f, 0.2f, 0.2f);
       m_shaderprogram.setUniformValue("light.specular", 1.0f, 1.0f, 1.0f);
       // material properties
       m_shaderprogram.setUniformValue("material.shininess", 32.0f);
       m_shaderprogram.setUniformValue("model_matrix", model);
       m_model->Draw(m_shaderprogram);

//       m_light_shaderProgram.bind();
//       m_light_shaderProgram.setUniformValue("projection_matrix", projection);
//       m_light_shaderProgram.setUniformValue("view_matrix", view);
//       model.setToIdentity();
//       model.translate(light_position);
//       model.rotate(1.0, 1.0f, 1.0f, 0.5f);
//       model.scale(0.2);
//       m_light_shaderProgram.setUniformValue("model_matrix", model);
//       m_light_shaderProgram.setUniformValue("light_color",light_color);

//       m_model->Draw(m_light_shaderProgram);


}

void OpenGL_Widget::OnTimeout()
{
    update();
}


void OpenGL_Widget::wheelEvent(QWheelEvent *event)
{
    m_camera.ProcessMouseScroll(event->angleDelta().y()/120);
}

void OpenGL_Widget::keyPressEvent(QKeyEvent *event)
{
    float deltaTime = TIMEOUTSECOND/1000.0;

    switch (event->key()) {
    case Qt::Key_W: m_camera.ProcessKeyboard(FORWARD,deltaTime);break;
    case Qt::Key_S: m_camera.ProcessKeyboard(BACKWARD,deltaTime);break;
    case Qt::Key_D: m_camera.ProcessKeyboard(RIGHT,deltaTime);break;
    case Qt::Key_A: m_camera.ProcessKeyboard(LEFT,deltaTime);break;
    case Qt::Key_Q: m_camera.ProcessKeyboard(DOWN,deltaTime);break;
    case Qt::Key_E: m_camera.ProcessKeyboard(UP,deltaTime);break;
    case Qt::Key_Space: m_camera.Position = view_auto_positon;break;

    default:break;
    }
}

void OpenGL_Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::RightButton){
        static QPoint lastPos(width()/2,height()/2);
        auto currentPos=event->pos();
        QPoint deltaPos=currentPos-lastPos;
        lastPos=currentPos;

        m_camera.ProcessMouseMovement(deltaPos.x(),-deltaPos.y());
    }
}

void OpenGL_Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::RightButton){
        static QPoint lastPos(width()/2,height()/2);
        auto currentPos=event->pos();
        QPoint deltaPos=currentPos-lastPos;
        lastPos=currentPos;

        m_camera.ProcessMouseMovement(deltaPos.x(),-deltaPos.y());
    }
}

QVector3D OpenGL_Widget::CameraPositionAuto(float max_Y, float min_Y)
{
    QVector3D tempVe3 = {0.0f, 0.0f, 0.0f};
    float height = max_Y - min_Y;
    tempVe3.setZ(1.0 * height);
    if(min_Y >= 0)
    {
        tempVe3.setY(height / 2.0f);
    }
    view_auto_positon = tempVe3;
    return tempVe3;
}


