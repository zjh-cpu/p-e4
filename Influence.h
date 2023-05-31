#ifndef INFLUENCE_H
#define INFLUENCE_H

#include "Spot.h"

class Influence {
public:
    virtual void implement(Spot& spot) = 0; // pure virtual function
};

#endif // INFLUENCE_H
