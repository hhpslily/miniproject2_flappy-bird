#include "role.h"

ROLE::ROLE(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(35,35);
    i=0;
    j=1;
    birdAnimation[0]=":/Image/bird1.png";
    birdAnimation[1]=":/Image/bird2.png";
    birdAnimation[2]=":/Image/bird3.png";
}

ROLE::~ROLE()
{

}

void ROLE::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(birdAnimation[i]);
    painter.drawPixmap(0,0,35,35,pix);
    if(j==4)
        i++;
    else if(j==5)
        i++;
    else{
        if(j>=6){
            i=0;
            j=0;
        }
    }
    j++;
}

