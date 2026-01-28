#include <iostream>
#include "Point.h"

using namespace std;

int main() {
//  =======Test fonction translater()=========

//  Point qu'on va translater
    Point p1;
    p1.setX(2);
    p1.setY(3);

//  Coordonnées pour la translation
    Point pTest;
    pTest.setX(42);
    pTest.setY(43);

//  Translation
    p1.translater(pTest);
    cout << p1.getX() << ", " << p1.getY() << endl;


    return 0;
}