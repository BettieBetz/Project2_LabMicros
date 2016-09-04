#ifndef BLOCKS_H
#define BLOCKS_H
#include <QGraphicsRectItem>
#include <QObject>
class Blocks: public QObject ,public QGraphicsRectItem {
    Q_OBJECT

public:
    void bloques ();
};
#endif // BLOCKS_H
