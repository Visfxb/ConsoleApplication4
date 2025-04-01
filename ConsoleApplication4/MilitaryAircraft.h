#pragma once
#include "Airplane.h"
#include <string>

class MilitaryAircraft final:
    public Airplane
{
private:
    string wearpon;
public:
    MilitaryAircraft();
    MilitaryAircraft(float weight, float ingine, float speed, float wingspan, string wearpon);
    string getWearpon()const;
    void showInfo()const;
    void attack();
};

