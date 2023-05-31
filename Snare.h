#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, public Influence {
private:
    bool operative;
public:
    Snare(int x, int y);
    bool isOperative();
    void implement(Spot& spot) override;
};

#endif // SNARE_H
