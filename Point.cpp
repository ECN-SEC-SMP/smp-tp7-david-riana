#include <iostream>
#include "Point.h"

using namespace std;

//PARTIE 1 : Création d'une classe Point

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

// void Point::translater(const Point &a){
//     x = x + a.x;
//     y = y + a.y;
// }

void Point::translater(const Point &a){
    this->addition(a);
}

void Point::affiche() const{
    cout << "(" << x << ", " << y << ")" <<endl;
}

void Point::addition(const Point &p){
    x = x + p.x;
    y = y + p.y;
}


