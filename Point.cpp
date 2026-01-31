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

//Mutateurs
void Point::setX(const float val){
    x = val;
}

void Point::setY(const float val){
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
    cout << "(" << getX() << ", " << getY() << ")" <<endl;
}


ostream& operator<<(ostream &os, const Point &p)
{
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os;
}


void Point::addition(const Point &p){
    x = x + p.x;
    y = y + p.y;
}

// void Point::operator+=(const Point &p2){
//     return this->addition(p2);
// }




