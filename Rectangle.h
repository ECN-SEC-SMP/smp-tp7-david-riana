//
// Created by David PROSPÉRIN on 28/01/2026.
//

#ifndef SMP_TP7_DAVID_RIANA_RECTANGLE_H
#define SMP_TP7_DAVID_RIANA_RECTANGLE_H
#include "Forme.h"

class Rectangle : public Forme{
private:
    Point cote1;
    Point cote2;
    Point cote3;
    Point cote4;

public:
    Rectangle() {
        cote1 = Point(0, 0);
        cote2 = Point(0, 1);
        cote3 = Point(2, 1);
        cote4 = Point(0, 2);
    }

    float perimetre() override;
    float surface() override;

    float getXMin() override;
    float getXMax() override;
    float getYMax() override;
    float getYMin() override;

    Point getCote1() const;
    Point getCote2() const;
    Point getCote3() const;
    Point getCote4() const;

    void setCote1(const Point &cote1);
    void setCote2(const Point &cote2);
    void setCote3(const Point &cote3);
    void setCote4(const Point &cote4);

    void setCote1(const float x, const float y) {
        cote1.setX(x);
        cote1.setY(y);
    };

    void setCote2(const float x, const float y) {
        cote2.setX(x);
        cote2.setY(y);
    };

    void setCote3(const float x, const float y) {
        cote3.setX(x);
        cote3.setY(y);
    };

    void setCote4(const float x, const float y) {
        cote4.setX(x);
        cote4.setY(y);
    };
};

ostream &operator<<(std::ostream &s, Rectangle &f);

#endif //SMP_TP7_DAVID_RIANA_RECTANGLE_H