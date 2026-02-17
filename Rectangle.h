//
// Created by David PROSPÉRIN on 28/01/2026.
//

#ifndef SMP_TP7_DAVID_RIANA_RECTANGLE_H
#define SMP_TP7_DAVID_RIANA_RECTANGLE_H
#include "Forme.h"

/**
 * @brief Représente un rectangle défini par ses 4 coins.
 *
 * Les coins sont stockés en attributs et les méthodes fournissent
 * périmètre, surface et bornes en X/Y.
 */
class Rectangle : public Forme{
private:
    Point coin1_;
    Point coin2_;
    Point coin3_;
    Point coin4_;

public:
    /**
     * @brief Constructeur par défaut initialisant un rectangle simple.
     */
    Rectangle() {
        coin1_ = Point(0, 0);
        coin2_ = Point(0, 1);
        coin3_ = Point(2, 1);
        coin4_ = Point(0, 2);
    }

    /**
     * @brief Calcule le périmètre du rectangle.
     * @return Le périmètre (float).
     */
    float perimetre() override;

    /**
     * @brief Calcule la surface du rectangle.
     * @return La surface (float).
     */
    float surface() override;

    /**
     * @brief Retourne la plus petite coordonnée X parmi les 4 coins.
     * @return La valeur minimale de X.
     */
    float getXMin() override;

    /**
     * @brief Retourne la plus grande coordonnée X parmi les 4 coins.
     * @return La valeur maximale de X.
     */
    float getXMax() override;

    /**
     * @brief Retourne la plus grande coordonnée Y parmi les 4 coins.
     * @return La valeur maximale de Y.
     */
    float getYMax() override;

    /**
     * @brief Retourne la plus petite coordonnée Y parmi les 4 coins.
     * @return La valeur minimale de Y.
     */
    float getYMin() override;

    /**
     * @brief Accesseurs vers les coins.
     */
    Point getCoin1() const;
    Point getCoin2() const;
    Point getCoin3() const;
    Point getCoin4() const;

    /**
     * @brief Mutateurs pour définir les coins à partir d'un Point.
     */
    void setCoin1(const Point &cote1);
    void setCoin2(const Point &cote2);
    void setCoin3(const Point &cote3);
    void setCoin4(const Point &cote4);

    /**
     * @brief Mutateurs pour définir les coins par coordonnées.
     */
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

    /**
     * @brief Translate le rectangle en ajoutant le point p à chaque coin.
     * @param p Le vecteur de translation.
     */
    void operator+=(const Point &p) {
        coin1_ += p;
        coin2_ += p;
        coin3_ += p;
        coin4_ += p;
    };
};

ostream &operator<<(std::ostream &s, Rectangle &f);

#endif //SMP_TP7_DAVID_RIANA_RECTANGLE_H