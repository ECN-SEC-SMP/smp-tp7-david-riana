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
    cout << "Test de la transaltion : "<< endl;
    p1.translater(pTest);
    cout << p1.getX() << ", " << p1.getY() << endl;

//  =======Test des constructeurs=========
    cout << "Constructeur sans paramètres : "<< endl;
    Point p2;
    cout << p2.getX() << ", " << p2.getY() << endl;

    cout << "Constructeur avec paramètres : "<< endl;
    Point p3(2,3);
    cout << p3.getX() << ", " << p3.getY() << endl;
    return 0;
}