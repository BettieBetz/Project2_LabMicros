#include "ball.h"
#include <QGraphicsScene>
#include <QKeyEvent>

void Ball::bola()
{
    //Create the ball
    Ball * bl = new Ball ();
    scene()->addItem(bl);
}
