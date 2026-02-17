//
// Created by David PROSPÉRIN on 28/01/2026.
//

#include <cmath>
#include "Rectangle.h"

Point Rectangle::getCoin1() const {
    return coin1_;
}

void Rectangle::setCoin1(const Point &cote1) {
    this->coin1_ = cote1;
}

Point Rectangle::getCoin2() const {
    return coin2_;
}

void Rectangle::setCoin2(const Point &cote2) {
    this->coin2_ = cote2;
}

Point Rectangle::getCoin3() const {
    return coin3_;
}

void Rectangle::setCoin3(const Point &cote3) {
    this->coin3_ = cote3;
}

Point Rectangle::getCoin4() const {
    return coin4_;
}

void Rectangle::setCoin4(const Point &cote4) {
    this->coin4_ = cote4;
}

float Rectangle::perimetre() {
    float long1 = sqrtf(powf(coin3_.getX() - coin2_.getX(), 2.0) + powf(coin3_.getY() - coin2_.getY(), 2.0));
    float larg1 = sqrtf(powf(coin2_.getX() - coin1_.getX(), 2.0) + powf(coin2_.getY() - coin1_.getY(), 2.0));

    return (long1 + larg1) * 2;
}

float Rectangle::surface() {
    float long1 = sqrtf(powf(coin3_.getX() - coin2_.getX(), 2.0) + powf(coin3_.getY() - coin2_.getY(), 2.0));
    float larg1 = sqrtf(powf(coin2_.getX() - coin1_.getX(), 2.0) + powf(coin2_.getY() - coin1_.getY(), 2.0));

    return long1 * larg1;
}

float Rectangle::getXMin() {
    float cote1XMin = coin1_.getX();
    float cote2XMin = coin2_.getX();
    float cote3XMin = coin3_.getX();
    float cote4XMin = coin4_.getX();
    return min(min(cote1XMin, cote2XMin), min(cote3XMin, cote4XMin));
}

float Rectangle::getXMax() {
    float cote1XMax = coin1_.getX();
    float cote2XMax = coin2_.getX();
    float cote3XMax = coin3_.getX();
    float cote4XMax = coin4_.getX();
    return max(max(cote1XMax, cote2XMax), max(cote3XMax, cote4XMax));
}

float Rectangle::getYMax() {
    float cote1YMax = coin1_.getY();
    float cote2YMax = coin2_.getY();
    float cote3YMax = coin3_.getY();
    float cote4YMax = coin4_.getY();
    return max(max(cote1YMax, cote2YMax), max(cote3YMax, cote4YMax));
}

float Rectangle::getYMin() {
    float cote1YMin = coin1_.getY();
    float cote2YMin = coin2_.getY();
    float cote3YMin = coin3_.getY();
    float cote4YMin = coin4_.getY();
    return min(min(cote1YMin, cote2YMin), min(cote3YMin, cote4YMin));
}

ostream& operator<<(ostream &os, Rectangle &c)
{
    os << "Rectangle:" << endl;
    os << "  | Perimetre = " << c.perimetre() << endl
       << "  | Surface = " << c.surface()     << endl
       << "  | Centre = " << c.getCentre()    << endl
       << "  | Coin1 = " << c.getCoin1()      << endl
       << "  | Coin2 = " << c.getCoin2()      << endl
       << "  | Coin3 = " << c.getCoin3()      << endl
       << "  | Coin4 = " << c.getCoin4()      << endl;
    return os;
}