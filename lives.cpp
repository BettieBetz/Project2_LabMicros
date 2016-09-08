#include "lives.h"
#include <QFont>

Lives::Lives(QGraphicsTextItem *parent) : QGraphicsTextItem(parent) {
    //inicializa score en 0
     lives = 3;

    //Escribe el texto
    setPlainText(QString("Vidas: ") + QString::number(lives));
    setDefaultTextColor (Qt::blue);
    setFont(QFont ("times",12));
}

void Lives::decrease() {
    lives--;
    setPlainText(QString("Vidas: ") + QString::number(lives));
}

int Lives::getLives() {
   return lives;
}
