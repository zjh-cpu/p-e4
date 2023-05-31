#include <iostream>
#include "Snare.h"
#include "Persona.h"

int main() {
    Snare snare(1, 1);
    std::cout << "Initial Snare Location: " << std::get<0>(snare.getLoc()) << "," << std::get<1>(snare.getLoc()) << "\n";
    std::cout << "Is Snare operative: " << snare.isOperative() << "\n";

    Persona persona(2, 2);
    std::cout << "Initial Persona Location: " << std::get<0>(persona.getLoc()) << "," << std::get<1>(persona.getLoc()) << "\n";
    
    // Shift persona location
    persona.shift(1, 1);
    std::cout << "Persona Location after shift: " << std::get<0>(persona.getLoc()) << "," << std::get<1>(persona.getLoc()) << "\n";

    // Implement snare on persona's spot
    snare.implement(persona);
    std::cout << "Persona Category after snare: " << persona.getCategory() << "\n";
    std::cout << "Is Snare operative: " << snare.isOperative() << "\n";

    return 0;
}
