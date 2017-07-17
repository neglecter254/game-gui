#include "glwidget.h"

#include <algorithm>
#include <iostream>
#define PI 3.14159265358979323

GLWidget::GLWidget(QWidget *parent): QOpenGLWidget(parent)
{

}

void GLWidget::toggleAspectRatio()
{
    keepAspectRatio = !keepAspectRatio;
    std::cout << keepAspectRatio << std::endl;
}

void GLWidget::initializeGL()
{
    // Set up the rendering context, load shaders and other resources, etc.:
    QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
    f -> glClearColor(0.2f, 0.8f, 0.2f, 1.0f);  // 背景色指定
}

void GLWidget::resizeGL(int w, int h)
{
    // 投影モードで設定
    glMatrixMode(GL_PROJECTION);

    // ウィンドウ全体をビューポートにする
    glViewport(0, 0, w, h);

    // 変換行列の初期化
    glLoadIdentity();

    if (keepAspectRatio){
        // スクリーン上の表示領域をビューポートの大きさに比例させる
        float x = std::min(w, h*3/2);
        float y = std::min(h, w*2/3);
        float size = std::min( x, y);
        glOrtho( -w / size * 3500, w / size * 3500,
                 -h / size * 3500, h / size * 3500, -1.0, 1.0);
    }
    else{
        // ウィンドウに合わせて伸縮
        glOrtho(-5000, 5000, -5000, 5000, -1.0, 1.0);
    }

    //モデルビューに戻す
    glMatrixMode(GL_MODELVIEW);

}
void GLWidget::paintGL()
{
    // glRotated(回転角,xベクトル,yベクトル,zベクトル);
    // glClear(GL_COLOR_BUFFER_BIT);
    // glPushMatrix();
    // glRotated(-90.0, 0.0, 0.0, 1.0);
    // glPopMatrix();

    // 行列初期化
    glLoadIdentity();

    // フィールド描画
    drawField();

    // ロボット描画
    drawRobot(0,0,1,RoboColor::Blue);



    // glFlush();   // 強制描画?
}

void GLWidget::drawField(){
    // 外枠
    glColor3d(1, 1, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2d(-4500, 3000);
    glVertex2d(-4500,-3000);
    glVertex2d( 4500,-3000);
    glVertex2d( 4500, 3000);
    glEnd();

    // 中央線
    glBegin(GL_LINES);
    glVertex2d(-4500, 0);
    glVertex2d( 4500, 0);
    glVertex2d( 0,-3000);
    glVertex2d( 0, 3000);
    glEnd();

    // 中央サークル (20角形)
    drawArc(0,0,500,0,360,20);

    // ゴールライン
    drawArc(-4500,250,1000,0,90,20);
    drawArc(-4500,-250,1000,0,-90,20);
    drawLine(-3500,250,-3500,-250);

    drawArc( 4500,250,1000,180,-90,20);
    drawArc( 4500,-250,1000,180,90,20);
    drawLine(3500,250,3500,-250);

    //ゴール
    glBegin(GL_LINE_STRIP);
    glVertex2d(-4500, 500);
    glVertex2d(-4680, 500);
    glVertex2d(-4680,-500);
    glVertex2d(-4500,-500);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2d(4500, 500);
    glVertex2d(4680, 500);
    glVertex2d(4680,-500);
    glVertex2d(4500,-500);
    glEnd();

}

void GLWidget::drawRobot(float x, float y, int robotId,RoboColor color){
    double deg = 59;
    if(color == RoboColor::Blue){
        glColor3d(0, 0, 1);
    }else{
        glColor3d(0, 1, 1);
    }
    drawPie(x, y, 90, deg, 360-2*deg, 20);
    //drawLine(x + 55, y + 78, x + 55, y - 78);
    //drawText(x, y, QString::number(robotId));
}

void GLWidget::drawArc(float x, float y, float r,
             float theta, float phase, int split)
{
    theta = theta / 180 * PI;
    float step = phase / split / 180 * PI;
    glBegin(GL_LINE_STRIP);
    for (int i=0; i <= split; i++){
        glVertex2d(x + r * cos( theta + step * i ),
                   y + r * sin( theta + step * i ));
    }
    glEnd();
}

void GLWidget::drawPie(float x, float y, float r,
             float theta, float phase, int split)
{
    theta = theta / 180 * PI;
    float step = phase / split / 180 * PI;
    glBegin(GL_TRIANGLE_FAN);
    for (int i=0; i <= split; i++){
        glVertex2d(x + r * cos( theta + step * i ),
                   y + r * sin( theta + step * i ));
    }
    glEnd();
}

void GLWidget::drawLine(float x1, float y1, float x2, float y2)
{
    glBegin(GL_LINES);
    glVertex2d(x1,y1);
    glVertex2d(x2,y2);
    glEnd();
}

// 暫定テキスト
void GLWidget::drawText(float x, float y, QString str){
    QPainter p(this);
    p.setPen(Qt::black);
    p.setFont(QFont("Decorative", 10));
    rect().x();
    p.drawText(QRect(x - 100, y - 100, x + 100, y + 100),
               Qt::AlignCenter,
               str);
}
