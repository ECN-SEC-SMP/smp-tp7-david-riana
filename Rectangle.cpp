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

float Rectangle::getXMin() {
    float cote1XMin = cote1.getX();
    float cote2XMin = cote2.getX();
    float cote3XMin = cote3.getX();
    float cote4XMin = cote4.getX();
    return min(min(cote1XMin, cote2XMin), min(cote3XMin, cote4XMin));
}

float Rectangle::getXMax() {
    float cote1XMax = cote1.getX();
    float cote2XMax = cote2.getX();
    float cote3XMax = cote3.getX();
    float cote4XMax = cote4.getX();
    return max(max(cote1XMax, cote2XMax), max(cote3XMax, cote4XMax));
}

float Rectangle::getYMax() {
    float cote1YMax = cote1.getY();
    float cote2YMax = cote2.getY();
    float cote3YMax = cote3.getY();
    float cote4YMax = cote4.getY();
    return max(max(cote1YMax, cote2YMax), max(cote3YMax, cote4YMax));
}

float Rectangle::getYMin() {
    float cote1YMin = cote1.getY();
    float cote2YMin = cote2.getY();
    float cote3YMin = cote3.getY();
    float cote4YMin = cote4.getY();
    return min(min(cote1YMin, cote2YMin), min(cote3YMin, cote4YMin));
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