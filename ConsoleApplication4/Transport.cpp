#include "Transport.h"

Transport::Transport()
{
    weight = 0;
    ingine = 0;
    speed = 0;
}

Transport::Transport(float weight, float ingine, float speed)
{
    this->weight = weight;
    this->ingine = ingine;
    this->speed = speed;
}

float Transport::getWeight() const { return weight; }
float Transport::getIngine() const { return ingine; }
float Transport::getSpeed() const { return speed; }

void Transport::showInfo() const
{
    cout << "Weight: " << weight << endl;
    cout << "Ingine: " << ingine << endl;
    cout << "Speed: " << speed << endl;
}
