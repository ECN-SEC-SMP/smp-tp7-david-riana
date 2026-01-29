//
// Created by David PROSPÉRIN on 28/01/2026.
//

#ifndef SMP_TP7_DAVID_RIANA_FORME_H
#define SMP_TP7_DAVID_RIANA_FORME_H

#include <iostream>
#include "Point.h"

using namespace std;

class Forme {
private:
    Point centre;

public:
    Forme(const Point& centre) {
        this->centre = centre;
    }

    Forme() {
        this->centre = Point(0, 0);
    }

    void operator+=(Point &p);

    Point getCentre() const;
    void  setCentre(const Point &p);

    virtual float perimetre() = 0;
    virtual float surface()   = 0;

    virtual float getXMin()   = 0;
    virtual float getXMax()   = 0;

    virtual float getYMax()   = 0;
    virtual float getYMin()   = 0;

};

ostream &operator<<(std::ostream &s, Forme &f);

#endif //SMP_TP7_DAVID_RIANA_FORME_H