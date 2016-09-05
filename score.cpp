#include "Score.h"
#include <QFont>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>

Score::Score(QGraphicsTextItem *parent): QGraphicsTextItem(parent) {
    //initialize the score to 0
     score = 0;

    //Draw the text
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor (Qt::green);
    setFont(QFont ("times",12));
}

void Score::increase() {
   score++;
   setPlainText(QString("Score: ") + QString::number(score));
}
int Score::getScore()
{
    return score;
}
