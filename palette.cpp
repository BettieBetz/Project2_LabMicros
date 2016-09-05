#include "palette.h"
#include "bullet.h"
#include <QGraphicsScene>
#include <QKeyEvent>

void Palette::tabla()
{
    //Create the pared_izquierda
    Palette * paleta = new Palette ();
    scene()->addItem(paleta);
}

void Palette::keyPressEvent(QKeyEvent *event)
{
    // qDebug() << "My Rect knows that you pressed a key";
        if (event->key() == Qt::Key_Left){
            if (pos().x() > 0){
            setPos(x()-5,y());
            }
        }
        else if (event->key() == Qt::Key_Right){
            if (pos ().x() < 390) {
            setPos(x()+5,y());
            }
        }

        else if (event->key() == Qt::Key_Space){
            //Create de bullet
            Bullet * bullet = new Bullet ();
            bullet->setPos(x()+60,y()+525);
            scene()->addItem(bullet);
        }
}
