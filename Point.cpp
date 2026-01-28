#include <iostream>
#include "Point.h"

using namespace std;

float Point::getX() const{
    return x;
}

float Point::getY() const{
    return y;
}

void Point::setX(float val){
    x = val;
}

void Point::setY(float val){
    y = val;
}
void Point::translater(const Point &a){
    x = x + a.x;
    y = y + a.y;
}


