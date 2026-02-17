//
// Created by David PROSPÉRIN on 28/01/2026.
//

#include "Carre.h"

ostream& operator<<(ostream &os, Carre &c)
{
    os << "Carre:" << endl;
    os << "  | Perimetre = " << c.perimetre() << endl
       << "  | Surface = " << c.surface()     << endl
       << "  | Centre = " << c.getCentre()    << endl
       << "  | Coin1 = " << c.getCoin1()      << endl
       << "  | Coin2 = " << c.getCoin2()      << endl
       << "  | Coin3 = " << c.getCoin3()      << endl
       << "  | Coin4 = " << c.getCoin4()      << endl;
    return os;
}