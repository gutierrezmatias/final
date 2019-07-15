#include "mosca.h"

mosca::mosca()
{
}
void mosca::set(double x,double y)
{
    this->x=x;
    this->y=y;
    w = 1;
    h = 1;
}
double mosca::getX(){
return this->x;
}
double mosca::getY(){
return this->y;
}
void mosca::move(){
    x=x+vel;

}
mosca::~mosca()
{
    //dtor
}
