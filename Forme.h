//
// Created by David PROSPÉRIN on 28/01/2026.
//

#ifndef SMP_TP7_DAVID_RIANA_FORME_H
#define SMP_TP7_DAVID_RIANA_FORME_H

#include <iostream>
#include "Point.h"

using namespace std;

/**
 * @brief Classe abstraite représentant une forme géométrique.
 *
 * Fournit l'interface pour les formes : calcul du périmètre,
 * de la surface et bornes en X/Y (xmin, xmax, ymin, ymax).
 */
class Forme {
private:
    Point centre;

public:
    /**
     * @brief Constructeur avec centre donné.
     * @param centre Le point représentant le centre de la forme.
     */
    Forme(const Point& centre) {
        this->centre = centre;
    }

    /**
     * @brief Constructeur par défaut. Initialise le centre à (0,0).
     */
    Forme() {
        this->centre = Point(0, 0);
    }

    /**
     * @brief Destructeur virtuel par défaut.
     */
    virtual ~Forme() = default;

    /**
     * @brief Translate la forme en ajoutant le point p au centre.
     * @param p Le vecteur de translation.
     */
    void operator+=(Point &p);

    /**
     * @brief Retourne le centre de la forme.
     * @return Le Point représentant le centre.
     */
    Point getCentre() const;

    /**
     * @brief Définit le centre de la forme.
     * @param p Le nouveau centre.
     */
    void  setCentre(const Point &p);

    /**
     * @brief Calcule le périmètre de la forme.
     * @return Le périmètre (float).
     */
    virtual float perimetre() = 0;

    /**
     * @brief Calcule la surface de la forme.
     * @return La surface (float).
     */
    virtual float surface()   = 0;

    /**
     * @brief Retourne la plus petite coordonnée X couverte par la forme.
     * @return La valeur minimale de X.
     */
    virtual float getXMin()   = 0;

    /**
     * @brief Retourne la plus grande coordonnée X couverte par la forme.
     * @return La valeur maximale de X.
     */
    virtual float getXMax()   = 0;

    /**
     * @brief Retourne la plus grande coordonnée Y couverte par la forme.
     * @return La valeur maximale de Y.
     */
    virtual float getYMax()   = 0;

    /**
     * @brief Retourne la plus petite coordonnée Y couverte par la forme.
     * @return La valeur minimale de Y.
     */
    virtual float getYMin()   = 0;

};

ostream &operator<<(std::ostream &s, Forme &f);

#endif //SMP_TP7_DAVID_RIANA_FORME_H