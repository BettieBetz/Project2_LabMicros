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
    int st = 1 ;

        //move de bullet up
        if (st == 1){
            setPos(x(),y()-10);

            if (pos().y() + rect() .height() < 0) {
                scene()->removeItem(this);
                delete this;
            }
             st = st + 1 ;
            //if bullet collides with enemy destroy both
            QList<QGraphicsItem*> colliding_items = collidingItems();

            for (int i=0 , n = colliding_items.size(); i < n ; ++i ){

                if (pos().y() + rect() .height() < 0) {
                    scene()->removeItem(this);
                    delete this;
                }


                if (typeid (*(colliding_items[i])) == typeid (Blocks) || typeid (*(colliding_items[i])) == typeid (Wall_top)) {
                    //remove then both
                    scene()->removeItem(colliding_items[i]);
                    //scene()->removeItem(this);
                    //delete the both
                    delete colliding_items[i];
                    //delete this;
                    return;
                }
                if (typeid (*(colliding_items[i])) == typeid (Wall_left)){
                    setPos(x()+100,y()+100);
                return;
                }
            }
        }




}
