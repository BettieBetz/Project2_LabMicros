#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QObject>

class Bullet : public QObject, public QGraphicsRectItem {
    Q_OBJECT
public:
    Bullet ();
public slots:
    void move();
public slots:
    void movimiento_inicial ();
public slots:
    void movimiento_pared_izquierda ();
public slots:
    void movimiento_pared_derecha ();
public slots:
    void movimiento_techo ();
public slots:
    void movimiento_paleta ();
};
#endif // BULLET_H

