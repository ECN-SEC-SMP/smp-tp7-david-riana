//
// Created by David PROSPÉRIN on 28/01/2026.
//

#include "Carre.h"

ostream& operator<<(ostream &os, Carre &c)
{
    os << "Carre:" << endl;
    os << "  | Perimetre = " << c.perimetre()
       << "  | Surface = " << c.surface()
       << "  | Centre = " << c.getCentre()
       << "  | Cote1 = " << c.getCote1()
       << "  | Cote2 = " << c.getCote2()
       << "  | Cote3 = " << c.getCote3()
       << "  | Cote4 = " << c.getCote4();
    return os;
}