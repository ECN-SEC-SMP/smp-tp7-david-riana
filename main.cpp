#include <iostream>
#include  <cassert>

#include "Carre.h"
#include "Point.h"
#include "Cercle.h"
#include "ListeFormes.h"
#include "Rectangle.h"

using namespace std;

int main() {
//  =======Test fonction translater()=========

//  Point qu'on va translater
    Point p1;
    p1.setX(2);
    p1.setY(3);

    assert(p1.getX() == 2);
    assert(p1.getY() == 3);

//  Coordonnées pour la translation
    Point pTest;
    pTest.setX(42);
    pTest.setY(43);

    assert(pTest.getX() == 42);
    assert(pTest.getY() == 43);

//  Translation
    cout << "Valeur de p1 initiale : "<< endl;
    p1.affiche();
    cout << "Test de la translation de (42,43): "<< endl;
    p1.translater(pTest);
    p1.affiche();

    assert(p1.getX() == 44);
    assert(p1.getY() == 46);

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

    assert(p1.getX() == 118 && p1.getY() == 138);

//  =======Test de cercle =========
    cout << "Test de la classe Cercle" << endl;
    Cercle c1;
    c1.setCentre(Point(1, 1));

    assert(c1.getCentre().getX() == 1);
    assert(c1.getCentre().getY() == 1);

    c1.setRayon(2);
    cout << "Cercle c1: " << c1 << endl;
    assert(c1.perimetre() == static_cast<float>(2.0 * M_PI * 2.0));
    assert(c1.surface()   == static_cast<float>(M_PI * 2 * 2));

    // =======Test de la classe Rectangle =========
    cout << "Test de la classe Rectangle" << endl;
    Rectangle r1;

    r1.setCoin2(0, 1); r1.setCoin3(2, 1);
    r1.setCoin1(0, 0); r1.setCoin4(2, 0);

    cout << r1;

    assert(r1.perimetre() == 6.0);
    assert(r1.surface() == 2.0);

    Rectangle r2;

    r2.setCoin2(0, 2); r2.setCoin3(1, 2);
    r2.setCoin1(0, 0); r2.setCoin4(1, 0);

    cout << r2;

    assert(r2.perimetre() == 6.0);
    assert(r2.surface() == 2.0);

    // Traslation de r1 de (1, 1)

    r1 += Point(1, 1);

    assert(r1.getCoin2().getX() == 1 && r1.getCoin2().getY() == 2); assert(r1.getCoin3().getX() == 3 && r1.getCoin3().getY() == 2);
    assert(r1.getCoin1().getX() == 1 && r1.getCoin1().getY() == 1); assert(r1.getCoin4().getX() == 3 && r1.getCoin4().getY() == 1);

    assert(r1.perimetre() == 6.0);
    assert(r1.surface() == 2.0);

    // Rectangle avec ces côtés non alignés avec les axes x et y
    Rectangle r3;

    r3.setCoin2(0, 1); r3.setCoin3(2, 3);
    r3.setCoin1(1, 0); r3.setCoin4(3, 2);

    cout << r3;

    assert(r3.surface()   - 4     < 0.01f);
    assert(r3.perimetre() - 8.49f < 0.01f);

    // =======Test de la classe Carre =========
    cout << "Test de la classe Carre" << endl;
    Carre car1;

    car1.setCoin2(0, 2); car1.setCoin3(2, 2);
    car1.setCoin1(0, 0); car1.setCoin4(2, 0);

    cout << car1;

    assert(car1.perimetre() == 8.0);
    assert(car1.surface() == 4.0);

    // Translation de car1 de (1, 1)

    car1 += Point(1, 1);

    assert(car1.getCoin2().getX() == 1 && car1.getCoin2().getY() == 3); assert(car1.getCoin3().getX() == 3 && car1.getCoin3().getY() == 3);
    assert(car1.getCoin1().getX() == 1 && car1.getCoin1().getY() == 1); assert(car1.getCoin4().getX() == 3 && car1.getCoin4().getY() == 1);

    assert(car1.perimetre() == 8.0);
    assert(car1.surface() == 4.0);

    // Carré avec ces côtés non alignés avec les axes x et y
    Carre car2;

    car2.setCoin2(0, 1); car2.setCoin3(1, 2);
    car2.setCoin1(1, 0); car2.setCoin4(2, 1);

    cout << car2;

    assert(car2.perimetre() - 5.65f < 0.01f);
    assert(car2.surface()   - 2.0f  < 0.01f);

    // =======Test de la classe ListeFormes =========
    ListeFormes liste;

    liste.ajout(&r1);
    liste.ajout(&r2);
    liste.ajout(&c1);
    liste.ajout(&car1);

    cout << liste;

    assert(liste.surfaceTotale() - 20.56f < 0.01f);

    cout << "Boîte englobante de la liste de formes: " << endl;
    Rectangle boite = liste.boiteEnglobante();
    cout << boite;

    return 0;
}