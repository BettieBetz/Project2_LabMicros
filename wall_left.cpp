#include "Wall_left.h"
#include <QGraphicsScene>
#include <QKeyEvent>

void Wall_left::pared_iz()
{
    //Create the pared_izquierda
    Wall_left * wall_left = new Wall_left ();
    scene()->addItem(wall_left);
}
