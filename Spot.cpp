#include "Spot.h"

Spot::Spot(int x, int y, char category) : location(x, y), category(category) {}

std::tuple<int, int> Spot::getLoc() {
    return location;
}

char Spot::getCategory() {
    return category;
}

void Spot::setLoc(int x, int y) {
    location = std::make_tuple(x, y);
}

void Spot::setCategory(char new_category) {
    category = new_category;
}
