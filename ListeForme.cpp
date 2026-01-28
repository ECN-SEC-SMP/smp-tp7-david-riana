#include <iostream>
#include "ListeForme.h"
#include "Point.h"
#include "Forme.h"
#include "Cercle.h"
#include "Carre.h"
#include "Rectangle.h"
using namespace std;

//Obtenir l'élément d'indice 
Forme ListeFormes::getForme(int i) const{
    return lst[i];
}

vector<Forme> ListeFormes::getFormes() const{
    return lst;
}

void ListeFormes::ajout(const Forme &f){
    lst.push_back(f);
}

float ListeFormes::surfaceTotale() const{
    float total = 0;
    for(int i = 0; i < lst.size(); i++){
        total += lst[i].surface();
    }
    return total;
}


Rectangle ListeFormes::boiteEnglobante() const{
    Rectangle boite;
    float xMax = 0; 
    float yMax = 0; 
    for (int i = 0; i < lst.size(); i++){
        xMax = max(lst.getForme(i)
    }
}