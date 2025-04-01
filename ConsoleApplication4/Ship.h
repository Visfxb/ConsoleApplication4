#pragma once
#include "Transport.h"

class Ship :
	public Transport
{
protected:
	float displacement;
public:
	Ship();
	Ship(float weight, float ingine, float speed, float displacement);
	float getDisplacement()const;

};

