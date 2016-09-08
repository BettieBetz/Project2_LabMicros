#include "wall_right.h"
#include <QGraphicsScene>
#include <QKeyEvent>


void Wall_right::pared_right()
{
    //Crea la pared_derecha
    Wall_right * wall_right = new Wall_right ();
    scene()->addItem(wall_right);
}
