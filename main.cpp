#include "mainwindow.h"
#include "wall_left.h"
#include "wall_right.h"
#include "wall_top.h"
#include "wall_botton.h"
#include "blocks.h"
#include "palette.h"
#include "ball.h"
#include "score.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//#########################################################
//########### DEFINIENDO  LA ESCENA #######################
    //create a scene
     QGraphicsScene * scene = new QGraphicsScene();

     //create a view to visualize the scene
     QGraphicsView * view = new QGraphicsView (scene);

  //  view->setHorizontalScrollBar(Qt::ScrollBarAlwaysOff);
  //  view->setVerticalScrollBar(Qt::ScrollBarAlwaysOff);
  //  Show the view
       view->show();
       view->setFixedSize(550,600);
       scene->setSceneRect(0,0,550,600);
  // w.show();

//#########################################################
//########### DEFINIENDO LOS OBJETOS EN LA ESCENA #########

//##################################################
//Create the Score
      Score * score = new Score();
      score-> setPos(400,500);
      scene->addItem(score);


//##################################################
    //Create the Pallete and put into scene also other attribute of object movil
     Palette * plt = new Palette ();
     plt -> setRect(15,525,100,10);
     plt -> setPos(+190,0);
     scene->addItem(plt);
     //make rect focusable
     plt->setFlag(QGraphicsItem::ItemIsFocusable);
     plt->setFocus();

//######################################################
     //Create the Ball and put into scene
     Ball * bl = new Ball ();
     bl->setRect(15,480 ,10,10);
     bl -> setPos(+230,0);
     scene->addItem(bl);
     //make rect focusable
    //bl->setFlag(QGraphicsItem::ItemIsFocusable);
    // bl->setFocus();

//######################################################
    //Create the wall left and put into scene
    Wall_left * wlf = new Wall_left ();
    wlf->setRect(0,0,15,600);
    scene->addItem(wlf);

//######################################################
    //Create the wall right and put into scene
    Wall_right * wr = new Wall_right ();
    wr->setRect(505,0,15,600);
    scene->addItem(wr);

//######################################################
    //Create the wall top and put into scene
    Wall_top * wt = new Wall_top ();
    wt->setRect(15,0,490,15);
    scene->addItem(wt);

//######################################################
    //Create the wall botton and put into scene
    Wall_botton * wb = new Wall_botton ();
    wb->setRect(15,585,490,15);
    scene->addItem(wb);

//######################################################
    //Create the Blocks 21 and put into scene
    for (int i=0; i<22 ; ++i ) {
             if (i == 0){
                Blocks * blk_i = new Blocks ();
                blk_i ->setRect (25,30,50,25);
                scene->addItem(blk_i);
            }
            else if (i == 1 ){
                Blocks * blk_i = new Blocks ();
                blk_i ->setRect (95,30,50,25);
                scene->addItem(blk_i);
            }
            else if (i == 2 ){
                Blocks * blk_i = new Blocks ();
                blk_i ->setRect (165,30,50,25);
                scene->addItem(blk_i);
            }
            else if (i == 3 ){
                Blocks * blk_i = new Blocks ();
                blk_i ->setRect (235,30,50,25);
                scene->addItem(blk_i);
            }
             else if (i == 4 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (305,30,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 5 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (375,30,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 7 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (445,30,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 8 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (25,80,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 9 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (95,80,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 10 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (165,80,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 11 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (235,80,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 12 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (305,80,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 13 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (375,80,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 14 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (445,80,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 15 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (25,130,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 16 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (95,130,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 17 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (165,130,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 18 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (235,130,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 19 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (305,130,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 20 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (375,130,50,25);
                 scene->addItem(blk_i);
             }
             else if (i == 21 ){
                 Blocks * blk_i = new Blocks ();
                 blk_i ->setRect (445,130,50,25);
                 scene->addItem(blk_i);
             }
        }
//######################################################

//#########################################################

    return a.exec();
}
