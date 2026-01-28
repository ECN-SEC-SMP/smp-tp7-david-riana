//
// Created by David PROSPÉRIN on 28/01/2026.
//

#include <cmath>
#include "Rectangle.h"

Point Rectangle::getCote1() const {
    return cote1;
}

void Rectangle::setCote1(const Point &cote1) {
    this->cote1 = cote1;
}

Point Rectangle::getCote2() const {
    return cote2;
}

void Rectangle::setCote2(const Point &cote2) {
    this->cote2 = cote2;
}

Point Rectangle::getCote3() const {
    return cote3;
}

void Rectangle::setCote3(const Point &cote3) {
    this->cote3 = cote3;
}

Point Rectangle::getCote4() const {
    return cote4;
}

void Rectangle::setCote4(const Point &cote4) {
    this->cote4 = cote4;
}

float Rectangle::perimetre() {
    float long1 = sqrtf(powf(cote3.getX() - cote2.getX(), 2.0) + powf(cote3.getY() - cote2.getY(), 2.0));
    float larg1 = sqrtf(powf(cote2.getX() - cote1.getX(), 2.0) + powf(cote2.getY() - cote1.getY(), 2.0));

    return (long1 + larg1) * 2;
}

float Rectangle::surface() {
    float long1 = sqrtf(powf(cote3.getX() - cote2.getX(), 2.0) + powf(cote3.getY() - cote2.getY(), 2.0));
    float larg1 = sqrtf(powf(cote2.getX() - cote1.getX(), 2.0) + powf(cote2.getY() - cote1.getY(), 2.0));

    return long1 * larg1;
}

ostream& operator<<(ostream &os, Rectangle &c)
{
    os << "Rectangle:" << endl;
    os << "  | Perimetre = " << c.perimetre()
       << "  | Surface = " << c.surface()
       << "  | Centre = " << c.getCentre()
       << "  | Cote1 = " << c.getCote1()
       << "  | Cote2 = " << c.getCote2()
       << "  | Cote3 = " << c.getCote3()
       << "  | Cote4 = " << c.getCote4();
    return os;
}