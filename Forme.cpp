//
// Created by David PROSPÉRIN on 28/01/2026.
//

#include "Forme.h"

#include <iostream>
using namespace std;

void Forme::operator+=(Point &p) {
    centre.translater(p);
}

ostream& operator<<(std::ostream &os, Forme &f)
{
    os << "Forme:" << endl;
    os << "  | Perimetre = " << f.perimetre()
       << "  | Surface = " << f.surface();
    return os;
}

Point Forme::getCentre() const{
    return centre;
}

void Forme::setCentre(const Point &p) {
    centre = p;
}