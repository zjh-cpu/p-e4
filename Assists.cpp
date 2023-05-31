#include "Assists.h"
#include <random>
#include <cmath>

std::tuple<int, int> Assists::createRandomLoc(int matrixWidth, int matrixHeight) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> disWidth(0, matrixWidth - 1);
    std::uniform_int_distribution<> disHeight(0, matrixHeight - 1);
    
    return std::make_tuple(disWidth(gen), disHeight(gen));
}

double Assists::evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
    int x1 = std::get<0>(loc1);
    int y1 = std::get<1>(loc1);
    int x2 = std::get<0>(loc2);
    int y2 = std::get<1>(loc2);
    
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
