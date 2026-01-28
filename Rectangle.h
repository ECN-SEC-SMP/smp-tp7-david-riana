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

    Point getCote1() const;
    void setCote1(const Point &cote1);
    Point getCote2() const;
    void setCote2(const Point &cote2);
    Point getCote3() const;
    void setCote3(const Point &cote3);
    Point getCote4() const;
    void setCote4(const Point &cote4);
};

ostream &operator<<(std::ostream &s, Rectangle &f);

#endif //SMP_TP7_DAVID_RIANA_RECTANGLE_H