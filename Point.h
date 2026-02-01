#ifndef SMP_TP7_DAVID_RIANA_POINT_H
#define SMP_TP7_DAVID_RIANA_POINT_H

#include <iostream>
using namespace std;

class Point{
    private:
        float x;
        float y;
    public:
        // Constructeur
        Point(){
            x = 0;
            y = 0;
        }

        Point(float x, float y){
            this -> x = x;
            this -> y = y;
        }

        Point(Point const &p){
            x = p.x;
            y = p.y;
        }

        //Accesseur
        float getX() const;
        float getY() const;

        //Setteur
        void setX(float val);
        void setY(float val);

        //Méthodes
        void translater(const Point &a);
        void addition(const Point &p);
        void affiche() const;
        void operator+=(const Point &p);
};

ostream& operator<<(ostream &os, const Point &p);

#endif //SMP_TP7_DAVID_RIANA_FORME_H

