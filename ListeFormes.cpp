#include <iostream>
#include <float.h>
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

Rectangle ListeFormes::boiteEnglobante() const{
    Rectangle boite;
    float xMin = FLT_MAX;
    float yMin = FLT_MAX;

    float xMax = FLT_MIN;
    float yMax = FLT_MIN;

    for (Forme *f : liste) {
        xMin = std::min(xMin, f->getXMin());
        yMin = std::min(yMin, f->getYMin());
        xMax = std::max(xMax, f->getXMax());
        yMax = std::max(yMax, f->getYMax());
    }

    boite.setCoin1(xMin, yMin);
    boite.setCoin2(xMin, yMax);
    boite.setCoin3(xMax, yMax);
    boite.setCoin4(xMax, yMin);

    return boite;
}

ostream& operator<<(ostream &os, ListeFormes &f)
{
    os << "ListeFormes:" << endl;
    for (Forme *forme : f.getFormes()) {
        os << *forme;
    }
    return os;
}