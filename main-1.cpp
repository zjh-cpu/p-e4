#include <iostream>
#include "Spot.h"
#include "Assists.h"

int main() {
    Spot spot(1, 1, 'A');
    std::cout << "Initial Location: " << std::get<0>(spot.getLoc()) << "," << std::get<1>(spot.getLoc()) << "\n";
    std::cout << "Initial Category: " << spot.getCategory() << "\n";
    
    spot.setLoc(2, 2);
    spot.setCategory('B');
    
    std::cout << "Updated Location: " << std::get<0>(spot.getLoc()) << "," << std::get<1>(spot.getLoc()) << "\n";
    std::cout << "Updated Category: " << spot.getCategory() << "\n";

    auto loc = Assists::createRandom
}
