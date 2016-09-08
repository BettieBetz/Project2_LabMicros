#ifndef WALL_BOTTON_H
#define WALL_BOTTON_H
#include <QGraphicsRectItem>
#include <QObject>


class Wall_botton: public QObject ,public QGraphicsRectItem {
    Q_OBJECT

public:
    void piso ();
};
#endif // WALL_BOTTON_H
