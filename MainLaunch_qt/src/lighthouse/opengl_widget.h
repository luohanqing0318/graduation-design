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
signals:


protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

    void wheelEvent(QWheelEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    QTime m_time;
    QTimer m_timer;
    QOpenGLShaderProgram m_shaderprogram;
    QOpenGLShaderProgram m_light_shaderProgram;
    Camera m_camera;
    QOpenGLTexture* m_diffuseTexture;
    QOpenGLTexture* m_specularTexture;

    Model* m_model;
public slots:
    void OnTimeout();
};

#endif // OPENGL_WIDGET_H
