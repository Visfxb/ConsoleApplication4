#include "MilitaryAircraft.h"

MilitaryAircraft::MilitaryAircraft()
{
    wearpon = "ShtormShadow";
}

MilitaryAircraft::MilitaryAircraft(float weight, float ingine, float speed, float wingspan, string wearpon) : Airplane(weight, ingine, speed, wingspan)
{
    this->wearpon = wearpon;
}

string MilitaryAircraft::getWearpon() const
{
    return wearpon;
}

void MilitaryAircraft::showInfo() const
{
    Airplane::showInfo();
    cout << "Wearpon: " << wearpon << endl;
}

void MilitaryAircraft::attack()
{
    cout << "Attack with: " << wearpon << endl;
}
