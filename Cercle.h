//
// Created by David PROSPÉRIN on 28/01/2026.
//

#ifndef SMP_TP7_DAVID_RIANA_CERCLE_H
#define SMP_TP7_DAVID_RIANA_CERCLE_H
#include "Forme.h"

/**
 * @brief Représente un cercle défini par son centre (hérité) et son rayon.
 */
class Cercle : public Forme {
private:
    float rayon = 0.0;

public:
    /**
     * @brief Calcule le périmètre du cercle.
     * @return Le périmètre (float).
     */
    float perimetre() override;

    /**
     * @brief Calcule la surface du cercle.
     * @return La surface (float).
     */
    float surface() override;

    /**
     * @brief Retourne le rayon du cercle.
     * @return Le rayon (float).
     */
    float getRayon() const {
        return rayon;
    }

    /**
     * @brief Définit le rayon du cercle.
     * @param rayon Le nouveau rayon.
     */
    void setRayon(const float rayon) {
        this->rayon = rayon;
    }

    /**
     * @brief Retourne la plus petite coordonnée X couverte par le cercle.
     * @return Valeur minimale de X.
     */
    float getXMin() override;

    /**
     * @brief Retourne la plus grande coordonnée X couverte par le cercle.
     * @return Valeur maximale de X.
     */
    float getXMax() override;

    /**
     * @brief Retourne la plus grande coordonnée Y couverte par le cercle.
     * @return Valeur maximale de Y.
     */
    float getYMax() override;

    /**
     * @brief Retourne la plus petite coordonnée Y couverte par le cercle.
     * @return Valeur minimale de Y.
     */
    float getYMin() override;
};

ostream &operator<<(std::ostream &os, Cercle &c);


#endif //SMP_TP7_DAVID_RIANA_CERCLE_H