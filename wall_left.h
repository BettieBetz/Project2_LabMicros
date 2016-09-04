#ifndef WALL_LEFT_H
#define WALL_LEFT_H
#include <QGraphicsRectItem>
#include <QObject>
class Wall_left: public QObject ,public QGraphicsRectItem {
    Q_OBJECT

public:
    void pared_iz ();
};
#endif // WALL_LEFT_H
