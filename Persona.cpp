#include "Persona.h"

Persona::Persona(int x, int y) : Spot(x, y, 'P') {}

void Persona::shift(int dx, int dy) {
    int newX = std::get<0>(getLoc()) + dx;
    int newY = std::get<1>(getLoc()) + dy;
    setLoc(newX, newY);
}
