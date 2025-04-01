#include "Airplane.h"

Airplane::Airplane()
{ wingspan = 0; }

Airplane::Airplane(float weight, float ingine, float speed, float wingspan) : Transport(weight, ingine, speed)
{ this->wingspan = wingspan; }


float Airplane::getWingspan() const { return wingspan; }

void Airplane::showInfo() const
{
    Transport::showInfo();
    cout << "Wingspan: " << wingspan << endl;
}
