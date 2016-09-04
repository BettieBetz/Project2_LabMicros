#include "blocks.h"
#include <QGraphicsScene>
#include <QKeyEvent>

void Blocks::bloques()
{
    //Create the pared_izquierda
    Blocks * blocks = new Blocks ();
    scene()->addItem(blocks);
}
