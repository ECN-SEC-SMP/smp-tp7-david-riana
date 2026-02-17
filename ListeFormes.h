#ifndef LISTEFORMES_H
#define LISTEFORMES_H

#include <iostream>
#include <vector>
#include "Forme.h"
#include "Rectangle.h"
using namespace std;

class ListeFormes{
    private:
        vector<Forme*> liste;
    public:
        //Accesseur
        Forme* getForme(int i) const;
        vector<Forme*> getFormes() const;

        void ajout(Forme *f);
        float surfaceTotale() const;

        Rectangle boiteEnglobante() const;
};

ostream &operator<<(std::ostream &s, ListeFormes &f);
#endif