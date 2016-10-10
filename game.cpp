//Se importan todas las librerias necesarias
//#include "mainwindow.h"
#include "wleft.h"
#include "wright.h"
#include "top.h"
#include "bottom.h"
#include "blocks.h"
#include "barra.h"
#include "ball.h"
#include "score.h"
#include "game.h"
#include "lives.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QTimer>
#include <QWidget>
#include <QFont>
#include <QProcess>



Game::Game(QWidget *parent)
{
    //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    //&&&&&&&&&&&  DEFINICION DE LA ESCENA &&&&&&&&&&&&&&&&&&&&&&&&
          //create a scene
           scene = new QGraphicsScene();

           //Creacion de view para visualizar la escena
           view = new QGraphicsView (scene);

        //  Show the view
             view->show();
             view->setFixedSize(850,600);
             scene->setSceneRect(0,0,550,600);
             QPixmap pix("/home/irene/Downloads/bbb.jpg");
             scene->setBackgroundBrush(pix.scaled(693,600));

      //&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
      //&&&&&&&&&&& DEFINIENDO LOS OBJETOS EN LA ESCENA &&&&&&&&&

      //Create the Score
            score = new Score();
            score-> setPos(400,500);
            scene->addItem(score);

      //Creacion de las "vidas"
            lives = new Lives();
            lives-> setPos(30,500);
            scene->addItem(lives);

      //creacion de la plataforma, se agrega a escena y se le da atributos de objeto movil
           plt = new Barra ();
           plt -> setRect(15,525,100,10);
           plt -> setPos(+190,0);
           scene->addItem(plt);
           plt -> setBrush(QColor(233,189,44));
           //crea una recta focusable
           plt->setFlag(QGraphicsItem::ItemIsFocusable);
           plt->setFocus();

      //Se crea la bola y se agrega a la escena
           bl = new Ball ();
           bl->setRect(250,514 ,10,10);
           bl -> setPos(0,0);
           scene->addItem(bl);
           bl-> setBrush(QColor(0,153,204));

    //Creacion de la pared izq, se pone en escena.
            wf = new WLeft ();
            wf->setRect(0,0,15,600);
            scene->addItem(wf);
            wf -> setBrush(QColor(0,0,0));

    //Crear la pared der., se agrega a la escena
        wr = new WRight ();
        wr->setRect(505,0,15,600);
        scene->addItem(wr);
        wr -> setBrush(QColor(0,0,0));

    //Crea el techo, se pone en escena.
        top = new Top ();
        top->setRect(15,0,490,15);
        scene->addItem(top);
        top -> setBrush(QColor(0,0,0));

    //Crea el  piso, se pone en escena
        bottom = new Bottom ();
        bottom->setRect(15,585,490,15);
        scene->addItem(bottom);
        bottom -> setBrush(QColor(0,0,0));

        //Crea los bloques, se ponen en escena
                for (int i=0; i<66 ; ++i ) {
                    if (i == 0){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (15,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(61,0,61));
                    }
                   else if (i == 1 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (53,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(95,9,95));
                       //QPixmap pix("/home/irene/Downloads/igihof-bg.jpg");
                       //blk_i -> set;
                    }
                   else if (i == 2 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (91,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(121,22,121));
                       //QPixmap pix1("/home/irene/Firefox_wallpaper.png");
                       //blk_i->setBackgroundBrush(pix.scaled(520,600));
                    }
                   else if (i == 3 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (127,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(146,41,146));
                    }
                   else if (i == 4 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (165,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(166,54,166));
                    }
                   else if (i == 5 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (203,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(183,68,183));
                    }
                   else if (i == 6 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (241,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(199,80,199));
                    }
                   else if (i == 7 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (277,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(209,84,209));
                    }
                   else if (i == 8 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (315,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(222,95,222));
                    }
                   else if (i == 9 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (353,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(239,110,239));
                    }
                   else if (i == 10 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (391,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(246,120,246));
                    }
                   else if (i == 11 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (429,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(255,124,255));
                    }
                   else if (i == 12 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (467,30,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(255,137,255));
                    }
                   else if (i == 13){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (15,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(33,5,75));
                    }
                   else if (i == 14 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (53,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(52,9,118));
                    }
                   else if (i == 15 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (91,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(65,11,146));
                    }
                   else if (i == 16 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (127,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(78,13,175));
                    }
                   else if (i == 17 ){
                      Blocks * blk_i = new Blocks ();
                      blk_i ->setRect (165,65,37,34);
                      scene->addItem(blk_i);
                      blk_i -> setBrush(QColor(90,15,203));
                    }
                   else if (i == 18 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (203,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(103,17,232));
                    }
                   else if (i == 19 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (241,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(113,18,255));
                    }
                   else if (i == 20 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (277,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(131,47,255));
                    }
                   else if (i == 21 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (315,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(137,58,255));
                    }
                   else if (i == 22 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (353,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(146,73,255));
                    }
                   else if (i == 23 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (391,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(163,101,255));
                    }
                   else if (i == 24 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect(429,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(180,129,255));
                    }
                   else if (i == 25 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (467,65,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(214,186,255));
                    }
                   else if (i == 26){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (15,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(4,4,88));
                    }
                   else if (i == 27 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (53,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(19,19,117));
                    }
                   else if (i == 28 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (91,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(23,23,145));
                    }
                   else if (i == 29 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (127,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(28,28,174));
                    }
                   else if (i == 30 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (165,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(47,47,190));
                    }
                   else if (i == 32 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (203,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(55,55,202));
                    }
                   else if (i == 33 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (241,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(65,65,220));
                    }
                   else if (i == 34 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (277,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(80,80,230));
                    }
                   else if (i == 35 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (315,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(100,100,230));
                    }
                   else if (i == 36 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (353,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(120,120,255));
                    }
                   else if (i == 37 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (391,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(137,137,255));
                    }
                   else if (i == 38 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (429,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(165,165,255));
                    }
                   else if (i == 39 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (467,100,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(193,193,255));
                    }
                   else if (i == 40){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (15,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(1,12,14));
                    }
                   else if (i == 41 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (53,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(2,35,43));
                    }
                   else if (i == 42 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (91,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(3,58,71));
                    }
                   else if (i == 43 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (127,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(4,81,100));
                    }
                   else if (i == 44 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (165,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(6,104,128));
                    }
                   else if (i == 45 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (203,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(7,127,156));
                    }
                   else if (i == 46 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (241,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(8,150,185));
                    }
                   else if (i == 47 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (277,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(33,167,213));
                    }
                   else if (i == 48 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (315,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(57,172,213));
                    }
                   else if (i == 49 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (353,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(81,177,230));
                    }
                   else if (i == 50 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (391,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(118,217,242));
                    }
                   else if (i == 51 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (429,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(145,222,235));
                    }
                   else if (i == 52 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (467,135,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(162,214,228));
                    }
                   else if (i == 53){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (15,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(2,47,19));
                    }
                   else if (i == 54 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (53,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(3,75,30));
                    }
                   else if (i == 55 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (91,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(5,104,41));
                    }
                   else if (i == 56 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (127,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(6,132,52));
                    }
                   else if (i == 57 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (165,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(7,161,63));
                    }
                   else if (i == 58 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (203,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(20,159,71));
                    }
                   else if (i == 59 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (241,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(46,181,95));
                    }
                   else if (i == 60 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (277,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(63,199,113));
                    }
                   else if (i == 61 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (315,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(74,212,125));
                    }
                   else if (i == 62 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (353,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(92,225,140));
                    }
                   else if (i == 63 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (391,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(107,232,153));
                    }
                   else if (i == 64 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (429,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(127,243,170));
                    }
                   else if (i == 65 ){
                       Blocks * blk_i = new Blocks ();
                       blk_i ->setRect (467,170,37,34);
                       scene->addItem(blk_i);
                       blk_i -> setBrush(QColor(159,255,195));
                    }
                }//endif
                //Finaliza la creacion de los bloques

}//"end game"
