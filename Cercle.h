//
// Created by David PROSPÉRIN on 28/01/2026.
//

#ifndef SMP_TP7_DAVID_RIANA_CERCLE_H
#define SMP_TP7_DAVID_RIANA_CERCLE_H
#include "Forme.h"

class Cercle : public Forme {
private:
    float rayon = 0.0;

public:
    float perimetre() override;
    float surface() override;

    float getRayon() const {
        return rayon;
    }

    void setRayon(const float rayon) {
        this->rayon = rayon;
    }
};

ostream &operator<<(std::ostream &os, Cercle &c);


#endif //SMP_TP7_DAVID_RIANA_CERCLE_H