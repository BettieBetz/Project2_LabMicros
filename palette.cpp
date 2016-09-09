#include "palette.h"
#include "ball.h"
#include "bullet.h"
#include <QGraphicsScene>
#include <QKeyEvent>

void Palette::tabla()
{
    //Creacion de la plataforma
    Palette * paleta = new Palette ();
    scene()->addItem(paleta);
}

void Palette::keyPressEvent(QKeyEvent *event)
{
        if (event->key() == Qt::Key_Left){
        //movimiento hacia la izquierda de la plataforma
            if (pos().x() > 0){
            setPos(x()-5,y());}
        }//end if Key_Left

        else if (event->key() == Qt::Key_Right){
        //movimiento hacia la derecha de la plataforma
            if (pos ().x() < 390) {
            setPos(x()+5,y());}
        }//end else if key_Right

        else if (event->key() == Qt::Key_Space){
            //Creacion de la pelota
            Ball * ball = new Ball ();
            ball->setPos(x()+60,y()+525);
            scene()->addItem(ball);//se agrega la pelota

            //Bullet * bullet = new Bullet ();
            //bullet->setPos(x()+60,y()+525);
            //scene()->addItem(bullet);//se agrega la pelota a la scena
        }

}//end void
