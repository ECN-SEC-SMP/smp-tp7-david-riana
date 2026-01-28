#pragma once

#include <iostream>
#include <vector>
#include "Forme.h"
using namespace std;

class ListeFormes{
    private:
        vector<Forme> lst;
    public:
        //Accesseur
        Forme getForme(int i) const;
        vector<Forme> getFormes() const;
        void ajout(const Forme &f);
        float surfaceTotale() const;
        Rectangle boiteEnglobante() const;
}