#ifndef __CAR_H__
#define __CAR_H__

#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car
{
private:
    char gamerId[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

public:
    void InitMembers();
    void ShowCarState();
    void Accel();
    void Break();
};

inline void Car::Accel()
{
    cout << "here is Accel" << endl;
}

inline void Car::Break()
{
    cout << "here is Break" << endl;
}

#endif