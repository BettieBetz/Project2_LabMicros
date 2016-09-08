#ifndef GAME_H
#define GAME_H

#include "mainwindow.h"
#include "wall_left.h"
#include "wall_right.h"
#include "wall_top.h"
#include "wall_botton.h"
#include "blocks.h"
#include "palette.h"
#include "ball.h"
#include "score.h"
#include "lives.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer>
#include <QWidget>
#include <QGraphicsPixmapItem>

class Game: public QGraphicsRectItem {

public:
    Game(QWidget * parent=0);
    QGraphicsScene * scene;
    QGraphicsView * view;
    Score * score;
    Lives * lives;
    Palette * plt;
    Ball * bl;
    Wall_left * wlf;
    Wall_top * wt;
    Wall_right * wr;
    Wall_botton * wb;
};

#endif // GAME_H
