//
// Created by David PROSPÉRIN on 28/01/2026.
//

#ifndef SMP_TP7_DAVID_RIANA_RECTANGLE_H
#define SMP_TP7_DAVID_RIANA_RECTANGLE_H
#include "Forme.h"

class Rectangle : public Forme{
private:
    Point coin1_;
    Point coin2_;
    Point coin3_;
    Point coin4_;

public:
    Rectangle() {
        coin1_ = Point(0, 0);
        coin2_ = Point(0, 1);
        coin3_ = Point(2, 1);
        coin4_ = Point(0, 2);
    }

    float perimetre() override;
    float surface() override;

    float getXMin() override;
    float getXMax() override;
    float getYMax() override;
    float getYMin() override;

    Point getCoin1() const;
    Point getCoin2() const;
    Point getCoin3() const;
    Point getCoin4() const;

    void setCoin1(const Point &cote1);
    void setCoin2(const Point &cote2);
    void setCoin3(const Point &cote3);
    void setCoin4(const Point &cote4);

    void setCoin1(const float x, const float y) {
        coin1_.setX(x);
        coin1_.setY(y);
    };

    void setCoin2(const float x, const float y) {
        coin2_.setX(x);
        coin2_.setY(y);
    };

    void setCoin3(const float x, const float y) {
        coin3_.setX(x);
        coin3_.setY(y);
    };

    void setCoin4(const float x, const float y) {
        coin4_.setX(x);
        coin4_.setY(y);
    };

    void operator+=(const Point &p) {
        coin1_ += p;
        coin2_ += p;
        coin3_ += p;
        coin4_ += p;
    };
};

ostream &operator<<(std::ostream &s, Rectangle &f);

#endif //SMP_TP7_DAVID_RIANA_RECTANGLE_H