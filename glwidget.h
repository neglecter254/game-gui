#ifndef GLWIDGET_H
#define GLWIDGET_H
#include <QWidget>
#include <QPainter>
#include <QString>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class GLWidget : public QOpenGLWidget {
public:
    GLWidget(QWidget *parent);
    void toggleAspectRatio();

    enum RoboColor {
        Blue,
        Yellow
    };

protected:
    void initializeGL();

    void resizeGL(int w, int h);

    void paintGL();

private:
    bool keepAspectRatio = true;

    void drawField();

    void drawLine(float x1, float y1, float x2, float y2);

    // 円弧 (中心x, 中心y, 半径, 基準角度, 基準からの角度, 分割数 )
    void drawArc(float x, float y, float r,
                 float theta, float phase, int split);

    void drawPie(float x, float y, float r,
                 float theta, float phase, int split);

    void drawText(float x, float y,QString str);

    void drawRobot(float x, float y, int robotId, RoboColor color);

};

#endif // GLWIDGET_H
