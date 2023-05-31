#include "Play.h"

int main() {
    Play play;
    play.initPlay(5, 10, 20, 20);  // Initialize game with 5 Personas, 10 Snares, matrix 20x20

    play.playCycle(100, 1.0);  // Run game for 100 cycles with snare trigger distance of 1.0

    return 0;
}
