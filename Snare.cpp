#include "Snare.h"

Snare::Snare(int x, int y) : Spot(x, y, 'S'), operative(true) {}

bool Snare::isOperative() {
    return operative;
}

void Snare::implement(Spot& spot) {
    if (operative) {
        spot.setCategory('S');
        operative = false;
    }
}
