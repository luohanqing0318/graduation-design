#ifndef OPENGL_WIDGET_H
#define OPENGL_WIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include <QTime>
#include <QTimer>
#include <QWheelEvent>
#include "src/camera/camera.h"
#include "src/model/model.h"
class OpenGL_Widget : public QOpenGLWidget,QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit OpenGL_Widget(QWidget *parent = nullptr);
    ~OpenGL_Widget();

     void LoadModel(string path);

signals:


protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

    void wheelEvent(QWheelEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
private:
    QVector3D CameraPositionAuto(float max_Y, float min_Y);

private:
    QTime m_time;
    QTimer m_timer;
    QOpenGLShaderProgram m_shaderprogram;
    QOpenGLShaderProgram m_light_shaderProgram;
    QOpenGLShaderProgram m_depthMap_shaderProgram;
    Camera m_camera;


    Model* m_model = nullptr;
public slots:
    void OnTimeout();
};

#endif // OPENGL_WIDGET_H
