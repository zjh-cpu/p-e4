#include "Play.h"
#include <iostream>

Play::Play() {}

std::vector<Spot*>& Play::getMatrix() {
    return matrix;
}

void Play::initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) {
    for (int i = 0; i < numPersonas; ++i) {
        auto loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
        matrix.push_back(new Persona(std::get<0>(loc), std::get<1>(loc)));
    }
    for (int i = 0; i < numSnares; ++i) {
        auto loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
        matrix.push_back(new Snare(std::get<0>(loc), std::get<1>(loc)));
    }
}

void Play::playCycle(int maxCycles, double snareTriggerDistance) {
    for (int cycle = 0; cycle < maxCycles; ++cycle) {
        for (auto& spot : matrix) {
            Persona* persona = dynamic_cast<Persona*>(spot);
            if (persona) {
                persona->shift(1, 0);

                // Check if persona stepped outside of the matrix
                if (std::get<0>(persona->getLoc()) >= matrix.size()) {
                    std::cout << "Persona has won the game!" << std::endl;
                    return;
                }
                
                // Check for nearby snares
                for (auto& spot2 : matrix) {
                    Snare* snare = dynamic_cast<Snare*>(spot2);
                    if (snare && snare->isOperative() &&
                        Assists::evaluateDistance(persona->getLoc(), snare->getLoc()) <= snareTriggerDistance) {
                        snare->implement(*persona);
                    }
                }
            }
        }
    }
    std::cout << "Maximum number of cycles reached. Game over." << std::endl;
}
