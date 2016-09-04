#ifndef WALL_TOP_H
#define WALL_TOP_H
#include <QGraphicsRectItem>
#include <QObject>
class Wall_top: public QObject ,public QGraphicsRectItem {
    Q_OBJECT

public:
    void techo ();
};

#endif // WALL_TOP_H
