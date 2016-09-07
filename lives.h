#ifndef LIVES_H
#define LIVES_H
#include <QGraphicsTextItem>

class Lives: public QGraphicsTextItem  {
public:
    Lives (QGraphicsTextItem * parent=0);
    void decrease ();
    int getLives();
private:
    int lives;
};
#endif // LIVES_H
