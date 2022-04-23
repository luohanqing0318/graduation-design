#include "opengl_widget.h"

const unsigned int TIMEOUTSECOND = 50;

float vertices[] = {
    // positions          // normals           // texture coords
    -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f, 0.0f,
    0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f, 0.0f,
    0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f, 1.0f,
    0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f, 1.0f,
    -0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f, 1.0f,
    -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f, 0.0f,

    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   0.0f, 0.0f,
    0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   1.0f, 0.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   1.0f, 1.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   1.0f, 1.0f,
    -0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   0.0f, 1.0f,
    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   0.0f, 0.0f,

    -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f, 0.0f,
    -0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  1.0f, 1.0f,
    -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
    -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
    -0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  0.0f, 0.0f,
    -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f, 0.0f,

    0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 0.0f,
    0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 1.0f,
    0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
    0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
    0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.0f, 0.0f,
    0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 0.0f,

    -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f, 1.0f,
    0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  1.0f, 1.0f,
    0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f, 0.0f,
    0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f, 0.0f,
    -0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  0.0f, 0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f, 1.0f,

    -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f, 1.0f,
    0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 1.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 0.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 0.0f,
    -0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  0.0f, 0.0f,
    -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f, 1.0f
};

unsigned int VAO,VBO,lightVAO;
QVector3D light_position(1.2f, 1.0f, 2.0f);
QVector3D light_color(1.0f, 1.0f, 1.0f);
QVector3D object_color(1.0f, 0.5f, 0.31f);

OpenGL_Widget::OpenGL_Widget(QWidget *parent) : QOpenGLWidget(parent)
{
    connect(&m_timer,SIGNAL(timeout()),this,SLOT(On_timeout()));
    m_timer.start(TIMEOUTSECOND);
    m_time.start();
    m_camera.Position = QVector3D(0.0,0.0,5.0) ;

}

OpenGL_Widget::~OpenGL_Widget()
{
      makeCurrent();
      glDeleteBuffers(1,&VBO);
      glDeleteVertexArrays(1,&VAO);
      glDeleteVertexArrays(1,&lightVAO);
      doneCurrent();
}

void OpenGL_Widget::initializeGL()
{
    initializeOpenGLFunctions();

      glGenVertexArrays(1, &VAO);
      glGenBuffers(1, &VBO);

      glBindVertexArray(VAO);
      glBindBuffer(GL_ARRAY_BUFFER, VBO);

      glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

      glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
      glEnableVertexAttribArray(0);

      bool success;
      m_shaderprogram.addShaderFromSourceFile(QOpenGLShader::Vertex,":/shaders/glsl/v_demo.glsl");
      m_shaderprogram.addShaderFromSourceFile(QOpenGLShader::Fragment,":/shaders/glsl/f_demo.glsl");
      success=m_shaderprogram.link();
      if(!success) qDebug()<<"ERR:"<<m_shaderprogram.log();
      m_shaderprogram.bind();
      m_shaderprogram.setUniformValue("object_color",object_color);
      m_shaderprogram.setUniformValue("light_color",light_color);


}

void OpenGL_Widget::resizeGL(int w, int h)
{
    Q_UNUSED(w);
    Q_UNUSED(h);
}

void OpenGL_Widget::paintGL()
{
       QMatrix4x4 model;
       QMatrix4x4 view;
       QMatrix4x4 projection;
       float time=m_time.elapsed()/50.0;
       projection.perspective(m_camera.Zoom,(float)width()/height(),0.1,100);
       view=m_camera.GetViewMatrix();
       glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
       glEnable(GL_DEPTH_TEST);
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
       m_shaderprogram.bind();
       m_shaderprogram.setUniformValue("projection_matrix", projection);
       m_shaderprogram.setUniformValue("view_matrix", view);
       model.rotate(time, 1.0f, 5.0f, 0.5f);
       m_shaderprogram.setUniformValue("model_matrix", model);
       glBindVertexArray(VAO);
       glDrawArrays(GL_TRIANGLES,0,36);


}

void OpenGL_Widget::On_timeout()
{
    update();
}
