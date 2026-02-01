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
    cout << "Valeur de p1 initiale : "<< endl;
    p1.affiche();
    cout << "Test de la translation de (42,43): "<< endl;
    p1.translater(pTest);
    p1.affiche();

//  =======Test des constructeurs=========
    cout << "Constructeur sans paramètres : "<< endl;
    Point p2;
    p2.affiche();

    cout << "Constructeur avec paramètres : "<< endl;
    Point p3(2,3);
    p3.affiche();

    cout << "Coordonnées du point de référence : "<< endl;
    p1.affiche();
    cout << "Constructeur avec référence à un autre point : "<< endl;
    Point p4(p1);
    p4.affiche();
    
//  =======Test des accesseurs=========
    cout << "Valeur de p1.x : "<< endl;
    cout << p1.getX() << endl;

    cout << "Valeur de p1.y : "<< endl;
    cout << p1.getY() << endl;

//  =======Test des mutateurs=========
    cout << "Coordonnées de p1: "<< endl;
    p1.affiche();

    cout << "Modification du champ x : 44 -> 76 : "<< endl;
    p1.setX(76);
    p1.affiche();
    cout << "Modification du champ y : 46 -> 95 : "<< endl;
    p1.setY(95);
    p1.affiche();

//  =======Test de la surcharge des opérateurs=========
    cout << "Test de la surcharge de <<, affichage de p1" << endl;
    cout << p1 << endl;
    
    cout << "Test de la surcharge de += sur p1 et pTest" << endl;
    p1 += pTest;
    cout << p1 << endl;
    return 0;
}