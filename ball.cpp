#include "ball.h"
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
#include <stdlib.h> //de aqui viene la funcion random
#include <QDebug>
#include <math.h>

int movX;
int movY;
int dir_movX = -1;
int dir_movY = -1;
int angulo_salida;

extern Game * game;

Ball::Ball() {
     //Construir el rectangulo
    setRect(0,0,5,5);
    generar_angulo();

    //conexion
     QTimer * timer = new QTimer ();
     connect(timer,SIGNAL(timeout()),this,SLOT(move()));
     timer -> start (50);
}//end Ball

void Ball::generar_angulo() {

    /*Se genera un angulo de salida aleatorio de 180° hacia arriba
     (desde -90° a 90°) */
    angulo_salida = rand() % 180;

    /*Se evalua el angulo de salida para determinar el tipo de
      de movimiento que va a adquirir */

    if((0<=angulo_salida)&&(angulo_salida<30)){
        dir_movX = -1;
        movX = 5;
        dir_movY = -1;
        movY = 2;
    }

    else if((30<=angulo_salida)&&(angulo_salida<60)){
        dir_movX = -1;
        movX = 5;
        dir_movY = -1;
        movY = 3;
    }

    else if((60<=angulo_salida)&&(angulo_salida<90)){
        dir_movX = -1;
        movX = 5;
        dir_movY = -1;
        movY = 4;
    }

    else if(angulo_salida == 90){
        dir_movX = 0;
        movX = 5;
        dir_movY = -1;
        movY = 5;
    }
    else if((90<=angulo_salida)&&(angulo_salida<120)){
        dir_movX = 1;
        movX = 5;
        dir_movY = -1;
        movY = 4;
    }
    else if((120<=angulo_salida)&&(angulo_salida<150)){
        dir_movX = 1;
        movX = 5;
        dir_movY = -1;
        movY = 3;
    }
    else if((150<=angulo_salida)&&(angulo_salida<=180)){
        dir_movX = 1;
        movX = 5;
        dir_movY = -1;
        movY = 2;
    }


    qDebug() << "MovX: "<< movX << "  MovY:" << movY;

}

void Ball::move() {

     //rebote_paleta();

     //Move the bullet up
     setPos(x()+(movX*dir_movX),y()+(movY*dir_movY));

 QList<QGraphicsItem*> colliding_items = collidingItems();


 for (int i=0 , n = colliding_items.size(); i < n ; ++i ){
     if (typeid (*(colliding_items[i])) == typeid (Blocks)) {
         scene()->removeItem(colliding_items[i]);//elimina bloque de la escena
         game->score->increase();//incrementa el score
         rebote_techo();
         //scene()->removeItem(this);
         //delete the both
         delete colliding_items[i];//elimina el bloque por completo
         //delete this;
         return;}

     if (typeid (*(colliding_items[i])) == typeid (Wall_left)){
         rebote_pared_izquierda();
         return;}

     if (typeid (*(colliding_items[i])) == typeid (Wall_right)){
         rebote_pared_derecha();
         return;}

     if (typeid (*(colliding_items[i])) == typeid (Palette)){
         rebote_paleta();
         return;}

     if (typeid (*(colliding_items[i])) == typeid (Wall_top)){
         rebote_techo();
         return;}

     if (typeid (*(colliding_items[i])) == typeid (Wall_botton)){
         game->lives->decrease();
         scene()->removeItem(this);
         //Si pelota colisiona con el piso se elimina
         delete this;
         return;}
 }//end for


}//end move

void Ball::rebote_pared_izquierda()
{//posicion de la pared izquierda
    dir_movX = dir_movX * (-1);
    qDebug() << "MovX: "<< movX << "  MovY:" << movY;
}

void Ball::rebote_pared_derecha()
{//posicion de la pared derecha
    dir_movX = dir_movX * (-1);
    qDebug() << "MovX: "<< movX << "  MovY:" << movY;
}

void Ball::rebote_techo()
{//posicion del techo
    dir_movY = dir_movY * (-1);
    qDebug() << "MovX: "<< movX << "  MovY:" << movY;
}

void Ball::rebote_paleta()
{//posicion de la plataforma
    dir_movY = dir_movY * (-1);
    qDebug() << "MovX: "<< movX << "  MovY:" << movY;
}
