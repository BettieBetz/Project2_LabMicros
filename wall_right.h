#ifndef WALL_RIGHT_H
#define WALL_RIGHT_H
#include <QGraphicsRectItem>
#include <QObject>
class Wall_right: public QObject ,public QGraphicsRectItem {
    Q_OBJECT

public:
    void pared_right ();
};

#endif // WALL_RIGHT_H
