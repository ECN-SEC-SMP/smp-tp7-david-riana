#ifndef SMP_TP7_DAVID_RIANA_POINT_H
#define SMP_TP7_DAVID_RIANA_POINT_H

#include <iostream>
using namespace std;

/**
 * @brief Représente un point 2D (x,y).
 */
class Point{
    private:
        float x;
        float y;
    public:
        /**
         * @brief Constructeur par défaut initialisant (0,0).
         */
        Point(){
            x = 0;
            y = 0;
        }

        /**
         * @brief Constructeur avec coordonnées.
         * @param x Coordonnée X.
         * @param y Coordonnée Y.
         */
        Point(float x, float y){
            this -> x = x;
            this -> y = y;
        }

        /**
         * @brief Constructeur de copie.
         * @param p Point source.
         */
        Point(Point const &p){
            x = p.x;
            y = p.y;
        }

        /**
         * @brief Retourne la coordonnée X.
         * @return Valeur de X.
         */
        float getX() const;
        /**
         * @brief Retourne la coordonnée Y.
         * @return Valeur de Y.
         */
        float getY() const;

        /**
         * @brief Définit la coordonnée X.
         * @param val Nouvelle valeur de X.
         */
        void setX(float val);
        /**
         * @brief Définit la coordonnée Y.
         * @param val Nouvelle valeur de Y.
         */
        void setY(float val);

        /**
         * @brief Translate ce point par le point a.
         * @param a Vecteur de translation.
         */
        void translater(const Point &a);
        /**
         * @brief Additionne le point p à ce point.
         * @param p Point ajouté.
         */
        void addition(const Point &p);
        /**
         * @brief Affiche le point sur la sortie standard.
         */
        void affiche() const;
        /**
         * @brief Ajoute le point p à ce point (opérateur +=).
         * @param p Point ajouté.
         */
        void operator+=(const Point &p);
};

ostream& operator<<(ostream &os, const Point &p);

#endif //SMP_TP7_DAVID_RIANA_POINT_H
