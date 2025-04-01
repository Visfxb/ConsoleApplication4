#pragma once
#include <iostream>
#include <cstdio>
using namespace std;

class Transport
{
protected:
	float weight;
	float ingine;
	float speed;
public:
	Transport();
	Transport(float weight, float ingine, float speed);
	float getWeight()const;
	float getIngine()const;
	float getSpeed()const;

	void showInfo()const;
};

