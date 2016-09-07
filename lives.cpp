#include "lives.h"
#include <QFont>

Lives::Lives(QGraphicsTextItem *parent) : QGraphicsTextItem(parent) {
    //initialize the score to 0
     lives = 3;

    //Draw the text
    setPlainText(QString("Lives: ") + QString::number(lives));
    setDefaultTextColor (Qt::blue);
    setFont(QFont ("times",12));
}

void Lives::decrease() {
    lives--;
    setPlainText(QString("Lives: ") + QString::number(lives));
}

int Lives::getLives() {
   return lives;
}
