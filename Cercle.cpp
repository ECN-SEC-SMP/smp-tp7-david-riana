//
// Created by David PROSPÉRIN on 28/01/2026.
//

#include <cmath>
#include "Cercle.h"

float Cercle::perimetre() {
    return 2.0 * M_PI * getRayon();
}

float Cercle::surface() {
    return M_PI * getRayon() * getRayon();
}

float Cercle::getXMin() {
    return getCentre().getX() - getRayon();
}

float Cercle::getXMax() {
    return getCentre().getX() + getRayon();
}

float Cercle::getYMax() {
    return getCentre().getY() + getRayon();
}

float Cercle::getYMin() {
    return getCentre().getY() - getRayon();
}

ostream& operator<<(ostream &os, Cercle &c)
{
    os << "Cercle:" << endl;
    os << "  | Perimetre = " << c.perimetre()
       << "  | Surface = " << c.surface()
       << "  | Centre = " << c.getCentre()
       << "  | Rayon = " << c.getRayon();
    return os;
}
