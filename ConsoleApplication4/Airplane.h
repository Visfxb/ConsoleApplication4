#pragma once
#include "Transport.h"

class Airplane :
    public Transport
{
protected:
    float wingspan;
public:
    Airplane();
    Airplane(float weight, float ingine, float speed, float wingspan);
    float getWingspan()const;
    void showInfo()const;
};

