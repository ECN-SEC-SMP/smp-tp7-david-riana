#ifndef LISTEFORMES_H
#define LISTEFORMES_H

#include <iostream>
#include <vector>
#include "Forme.h"
#include "Rectangle.h"
using namespace std;

/**
 * @brief Conteneur de formes géométriques.
 *
 * Permet d'ajouter des formes, de calculer la surface totale et
 * d'obtenir une boîte englobante qui contient toutes les formes.
 */
class ListeFormes{
    private:
        vector<Forme*> liste;
    public:
        /**
         * @brief Retourne la forme à l'indice i.
         * @param i Indice de la forme.
         * @return Pointeur vers la Forme (ou nullptr si hors borne).
         */
        Forme* getForme(int i) const;
        /**
         * @brief Retourne la liste de pointeurs vers les formes.
         * @return vecteur de Forme*.
         */
        vector<Forme*> getFormes() const;

        /**
         * @brief Ajoute une forme à la liste.
         * @param f Pointeur vers la Forme à ajouter.
         */
        void ajout(Forme *f);

        /**
         * @brief Calcule la surface totale de toutes les formes.
         * @return Surface totale (float).
         */
        float surfaceTotale() const;

        /**
         * @brief Calcule la boîte englobante (rectangle) de toutes les formes.
         * @return Rectangle couvrant toutes les formes.
         */
        Rectangle boiteEnglobante() const;
};

ostream &operator<<(std::ostream &s, ListeFormes &f);
#endif