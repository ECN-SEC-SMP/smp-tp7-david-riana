#include <iostream>
#include "ListeFormes.h"
#include "Forme.h"
using namespace std;

//Obtenir l'élément d'indice 
Forme* ListeFormes::getForme(int i) const {
    return liste[i];
}

vector<Forme*> ListeFormes::getFormes() const{
    return liste;
}

void ListeFormes::ajout(Forme *f){
    liste.push_back(f);
}

float ListeFormes::surfaceTotale() const{
    float total = 0.0;

    for (Forme *f : liste) {
        total += f->surface();
    }

    return total;
}