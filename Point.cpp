#include <iostream>
#include "Point.h"

using namespace std;

//Accesseurs
float Point::getX() const{
    return x;
}

float Point::getY() const{
    return y;
}

//Setteur
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


