#include "score.h"
#include <QFont>


Score::Score(QGraphicsTextItem *parent): QGraphicsTextItem(parent) {
    //inicializa la puntuacion en 0
     score = 0;

    //escribe el texto
    setPlainText(QString("Puntuacion: ") + QString::number(score));
    setDefaultTextColor (Qt::green);
    setFont(QFont ("times",12));
}

void Score::increase() {
   score++;
   setPlainText(QString("Puntuacion: ") + QString::number(score));
}

int Score::getScore()
{
    return score;
}
