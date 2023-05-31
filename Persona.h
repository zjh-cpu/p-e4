#ifndef PERSONA_H
#define PERSONA_H

#include "Spot.h"

class Persona : public Spot {
public:
    Persona(int x, int y);
    void shift(int dx, int dy);
};

#endif // PERSONA_H
