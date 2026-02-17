//
// Created by David PROSPÉRIN on 28/01/2026.
//

#include <cmath>
#include "Cercle.h"

/**
 * @brief Calcule le périmètre du cercle.
 *
 * Utilise la formule 2 * \f$\pi\f$ * rayon.
 * @return Le périmètre du cercle.
 */
float Cercle::perimetre() {
    return 2.0 * M_PI * getRayon();
}

/**
 * @brief Calcule la surface (aire) du cercle.
 *
 * Utilise la formule \f$\pi r^2\f$.
 * @return L'aire du cercle.
 */
float Cercle::surface() {
    return M_PI * getRayon() * getRayon();
}

/**
 * @brief Retourne la plus petite coordonnée X du cercle.
 *
 * Correspond à centre.x - rayon.
 * @return La valeur minimale de X.
 */
float Cercle::getXMin() {
    return getCentre().getX() - getRayon();
}

/**
 * @brief Retourne la plus grande coordonnée X du cercle.
 *
 * Correspond à centre.x + rayon.
 * @return La valeur maximale de X.
 */
float Cercle::getXMax() {
    return getCentre().getX() + getRayon();
}

/**
 * @brief Retourne la plus grande coordonnée Y du cercle.
 *
 * Correspond à centre.y + rayon.
 * @return La valeur maximale de Y.
 */
float Cercle::getYMax() {
    return getCentre().getY() + getRayon();
}

/**
 * @brief Retourne la plus petite coordonnée Y du cercle.
 *
 * Correspond à centre.y - rayon.
 * @return La valeur minimale de Y.
 */
float Cercle::getYMin() {
    return getCentre().getY() - getRayon();
}

/**
 * @brief Écrit une représentation textuelle du cercle dans un flux de sortie.
 * @param os Flux de sortie dans lequel écrire.
 * @param c Référence sur le cercle à afficher.
 * @return Le flux \p os pour permettre le chaînage.
 */
ostream& operator<<(ostream &os, Cercle &c)
{
    os << "Cercle:" << endl;
    os << "  | Perimetre = " << c.perimetre() << endl
       << "  | Surface = " << c.surface()     << endl
       << "  | Centre = " << c.getCentre()    << endl
       << "  | Rayon = " << c.getRayon()      << endl;
    return os;
}
