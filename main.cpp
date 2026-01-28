#include <iostream>
#include "Point.h"
#include "Forme.h"

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
    cout << "Test de la translation : "<< endl;
    p1.translater(pTest);
    p1.affiche();

//  =======Test des constructeurs=========
    cout << "Constructeur sans paramètres : "<< endl;
    Point p2;
    p2.affiche();

    cout << "Constructeur avec paramètres : "<< endl;
    Point p3(2,3);
    p3.affiche();

    cout << "Constructeur avec référence à un autre point : "<< endl;
    Point p4(p1);
    p4.affiche();

    // =======Test fonction de ========
    return 0;
}