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
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QTimer>
#include <QWidget>
#include <QFont>
#include "game.h"


  Game::Game(QWidget *parent)

  {
      //#########################################################
      //########### DEFINIENDO  LA ESCENA #######################
          //create a scene
           scene = new QGraphicsScene();

           //create a view to visualize the scene
           view = new QGraphicsView (scene);

        //  view->setHorizontalScrollBar(Qt::ScrollBarAlwaysOff);
        //  view->setVerticalScrollBar(Qt::ScrollBarAlwaysOff);
        //  Show the view
             view->show();
             view->setFixedSize(850,600);
             scene->setSceneRect(0,0,550,600);
        // w.show();

      //#########################################################
      //########### DEFINIENDO LOS OBJETOS EN LA ESCENA #########

      //##################################################
      //Create the Score
            score = new Score();
            score-> setPos(400,500);
            scene->addItem(score);

      //##################################################
      //Create the lives
                  lives = new Lives();
                  lives-> setPos(30,500);
                  scene->addItem(lives);
      //##################################################
          //Create the Pallete and put into scene also other attribute of object movil
           plt = new Palette ();
           plt -> setRect(15,525,100,10);
           plt -> setPos(+190,0);
           scene->addItem(plt);
           //make rect focusable
           plt->setFlag(QGraphicsItem::ItemIsFocusable);
           plt->setFocus();

      //######################################################

           //Create the Ball and put into scene
           bl = new Ball ();
           bl->setRect(15,480 ,10,10);
           bl -> setPos(+230,0);
           scene->addItem(bl);
           //make rect focusable
          //bl->setFlag(QGraphicsItem::ItemIsFocusable);
          // bl->setFocus();

           //######################################################
               //Create the wall left and put into scene
               wlf = new Wall_left ();
               wlf->setRect(0,0,15,600);
               scene->addItem(wlf);

           //######################################################
               //Create the wall right and put into scene
               wr = new Wall_right ();
               wr->setRect(505,0,15,600);
               scene->addItem(wr);

           //######################################################
               //Create the wall top and put into scene
               wt = new Wall_top ();
               wt->setRect(15,0,490,15);
               scene->addItem(wt);

           //######################################################
               //Create the wall botton and put into scene
               wb = new Wall_botton ();
               wb->setRect(15,585,490,15);
               scene->addItem(wb);
           //######################################################
               //Create the Blocks 21 and put into scene
               for (int i=0; i<66 ; ++i ) {
                        if (i == 0){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (20,30,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 1 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (57,30,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 2 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (94,30,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 3 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (131,30,32,25);
                           scene->addItem(blk_i);
                       }
                        else if (i == 4 ){
                           Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (168,30,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 5 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (205,30,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 6 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (242,30,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 7 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (279,30,32,25);
                            scene->addItem(blk_i);
                        }
                       else if (i == 8 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (316,30,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 9 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (353,30,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 10 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (390,30,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 11 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (427,30,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 12 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (464,30,32,25);
                            scene->addItem(blk_i);
                        }
                        if (i == 13){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (20,65,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 14 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (57,65,34,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 15 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (94,65,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 16 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (131,65,32,25);
                           scene->addItem(blk_i);
                       }
                        else if (i == 17 ){
                           Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (168,65,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 18 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (205,65,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 19 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (242,65,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 20 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (279,65,32,25);
                            scene->addItem(blk_i);
                        }
                       else if (i == 21 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (316,65,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 22 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (353,65,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 23 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (390,65,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 24 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (427,65,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 25 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (464,65,32,25);
                            scene->addItem(blk_i);
                        }
                        if (i == 26){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (20,100,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 27 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (57,100,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 28 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (94,100,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 29 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (131,100,32,25);
                           scene->addItem(blk_i);
                       }
                        else if (i == 30 ){
                           Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (168,100,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 32 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (205,100,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 33 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (242,100,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 34 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (279,100,32,25);
                            scene->addItem(blk_i);
                        }
                       else if (i == 35 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (316,100,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 36 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (353,100,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 37 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (390,100,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 38 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (427,100,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 39 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (464,100,32,25);
                            scene->addItem(blk_i);
                        }
                        if (i == 40){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (20,135,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 41 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (57,135,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 42 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (94,135,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 43 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (131,135,32,25);
                           scene->addItem(blk_i);
                       }
                        else if (i == 44 ){
                           Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (168,135,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 45 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (205,135,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 46 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (242,135,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 47 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (279,135,32,25);
                            scene->addItem(blk_i);
                        }
                       else if (i == 48 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (316,135,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 49 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (353,135,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 50 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (390,135,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 51 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (427,135,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 52 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (464,135,32,25);
                            scene->addItem(blk_i);
                        }
                        if (i == 53){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (20,170,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 54 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (57,170,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 55 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (94,170,32,25);
                           scene->addItem(blk_i);
                       }
                       else if (i == 56 ){
                           Blocks * blk_i = new Blocks ();
                           blk_i ->setRect (131,170,32,25);
                           scene->addItem(blk_i);
                       }
                        else if (i == 57 ){
                           Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (168,170,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 58 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (205,170,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 59 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (242,170,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 60 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (279,170,32,25);
                            scene->addItem(blk_i);
                        }
                       else if (i == 61 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (316,170,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 62 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (353,170,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 63 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (390,170,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 64 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (427,170,32,25);
                            scene->addItem(blk_i);
                        }
                        else if (i == 65 ){
                            Blocks * blk_i = new Blocks ();
                            blk_i ->setRect (464,170,32,25);
                            scene->addItem(blk_i);
                        }

                   }
           //######################################################

  }
