#ifndef PLAY_H
#define PLAY_H

#include <vector>
#include "Spot.h"
#include "Persona.h"
#include "Snare.h"
#include "Assists.h"

class Play {
private:
    std::vector<Spot*> matrix;

public:
    Play();
    std::vector<Spot*>& getMatrix();
    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight);
    void playCycle(int maxCycles, double snareTriggerDistance);
};

#endif // PLAY_H
