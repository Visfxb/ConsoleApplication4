#include "Ship.h"

Ship::Ship()
{
    displacement = 0;
}

Ship::Ship(float weight, float ingine, float speed, float displacement)
{
    this->displacement = displacement;
    this->weight = weight;
    this->ingine = ingine;
    this->speed = speed;
}

float Ship::getDisplacement() const
{
    return displacement;
}
