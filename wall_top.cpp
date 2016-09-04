#include "wall_top.h"
#include <QGraphicsScene>
#include <QKeyEvent>
void Wall_top::techo()
{
    //Create the pared_izquierda
    Wall_top * wall_top = new Wall_top ();
    scene()->addItem(wall_top);
}
