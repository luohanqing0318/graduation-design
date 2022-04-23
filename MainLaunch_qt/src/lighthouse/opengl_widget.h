#ifndef OPENGL_WIDGET_H
#define OPENGL_WIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>
#include <QTime>
#include <QTimer>
#include "src/camera/camera.h"
class OpenGL_Widget : public QOpenGLWidget,QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit OpenGL_Widget(QWidget *parent = nullptr);
    ~OpenGL_Widget();
signals:


protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();


private:
    QTime m_time;
    QTimer m_timer;
    QOpenGLShaderProgram m_shaderprogram;
    Camera m_camera;
public slots:
    void On_timeout();
};

#endif // OPENGL_WIDGET_H
