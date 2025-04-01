#include "MilitaryAircraft.h"


int main()
{
	MilitaryAircraft F16(2.2, 76.3, 254, 9.96, "Touwrs");
	F16.showInfo();
	F16.attack();
}