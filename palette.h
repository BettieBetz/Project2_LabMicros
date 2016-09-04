#ifndef PALETTE_H
#define PALETTE_H
#include <QGraphicsRectItem>
#include <QObject>

class Palette: public QObject ,public QGraphicsRectItem {
    Q_OBJECT

public:
    void tabla ();
public:
    void keyPressEvent(QKeyEvent * event);

};
#endif // PALETTE_H
