#include "bullet.h"
#include "palette.h"
#include "blocks.h"
#include "wall_botton.h"
#include "wall_right.h"
#include "wall_top.h"
#include "wall_left.h"
#include "score.h"
#include "game.h"
#include "mainwindow.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <typeinfo>

extern Game * game ;


Bullet::Bullet() {
     //Construir el rectangulo
    setRect(0,0,5,5);

    //conexion
     QTimer * timer = new QTimer ();
     connect(timer,SIGNAL(timeout()),this,SLOT(move()));
     timer -> start (20);
}

void Bullet::move() {

     movimiento_paleta();

 QList<QGraphicsItem*> colliding_items = collidingItems();



 for (int i=0 , n = colliding_items.size(); i < n ; ++i ){
     if (typeid (*(colliding_items[i])) == typeid (Blocks)) {
         scene()->removeItem(colliding_items[i]);//elimina bloque de la escena
         game->score->increase();//incrementa el score
         movimiento_techo();
         //scene()->removeItem(this);
         //delete the both
         delete colliding_items[i];//elimina el bloque por completo
         //delete this;
         return;}
     if (typeid (*(colliding_items[i])) == typeid (Wall_left)){
         movimiento_pared_izquierda();
         return;}
     if (typeid (*(colliding_items[i])) == typeid (Wall_botton)){
         game->lives->decrease();
         scene()->removeItem(this);
         //Si pelota colisiona con el piso se elimina
         delete this;
         return;}
 }//end for


}//end move

void Bullet::movimiento_inicial()
{//posicion inicial de la pelota
    setPos(x()-10,y()-10);
}

void Bullet::movimiento_pared_izquierda()
{//posicion de la pared izquierda
    setPos(x()+10,y()-10);
}

void Bullet::movimiento_pared_derecha()
{//posicion de la pared derecha
    setPos(x()-10,y()+10);
}

void Bullet::movimiento_techo()
{//posicion del techo
    setPos(x()+20,y()+20);
}

void Bullet::movimiento_paleta()
{//posicion de la plataforma
    setPos(x(),y()-10);
}
