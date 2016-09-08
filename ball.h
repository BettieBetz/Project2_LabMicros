#ifndef BALL_H
#define BALL_H
#include <QGraphicsRectItem>
#include <QObject>

class Ball: public QObject ,public QGraphicsRectItem {
    Q_OBJECT

public:
    Ball();

public slots:
    void move ();    
    void rebote_pared_izquierda();
    void rebote_pared_derecha();
    void rebote_techo();
    void rebote_paleta();
    void generar_angulo();
};
#endif // BALL_H
