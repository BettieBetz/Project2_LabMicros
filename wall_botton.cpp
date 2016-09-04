#include "wall_botton.h"
#include <QGraphicsScene>
#include <QKeyEvent>
void Wall_botton::piso()
{
    //Create the pared_izquierda
    Wall_botton * wall_botton = new Wall_botton ();
    scene()->addItem(wall_botton);
}
