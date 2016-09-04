#include "Bullet.h"
#include "palette.h"
#include "Blocks.h"
#include "wall_botton.h"
#include "wall_right.h"
#include "Wall_top.h"
#include "wall_left.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <typeinfo>


Bullet::Bullet() {
     //Drew the rect
    setRect(0,0,5,5);

    //connect
     QTimer * timer = new QTimer ();
     connect(timer,SIGNAL(timeout()),this,SLOT(move()));
     timer -> start (20);
}

void Bullet::move() {

 QList<QGraphicsItem*> colliding_items = collidingItems();

 for (int i=0 , n = colliding_items.size(); i < n ; ++i ){

                  if (typeid (*(colliding_items[i])) == typeid (Blocks)) {
                     //remove then both
                     scene()->removeItem(colliding_items[i]);
                     scene()->removeItem(this);
                     //delete the both
                     delete colliding_items[i];
                     delete this;
                     return;
                 }
                 if (typeid (*(colliding_items[i])) == typeid (Wall_left)){
                     setPos(x()+100,y()+100);
                 return;
                 }
                 if (typeid (*(colliding_items[i])) == typeid (Wall_botton)){
                     scene()->removeItem(this);
                     delete this;
                 return;
                 }
             }

  //  movimiento_inicial();
  // movimiento_pared_izquierda();
  //  movimiento_techo();
   // movimiento_pared_derecha();
    movimiento_paleta();

}

void Bullet::movimiento_inicial()
{
    setPos(x()-10,y()-10);

}

void Bullet::movimiento_pared_izquierda()
{
    setPos(x()+10,y()-10);
}

void Bullet::movimiento_pared_derecha()
{
    setPos(x()-10,y()+10);
}

void Bullet::movimiento_techo()
{
    setPos(x()+10,y()+10);
}

void Bullet::movimiento_paleta()
{
    setPos(x(),y()-10);
}
