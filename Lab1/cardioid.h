#ifndef CARDIOID_H
#define CARDIOID_H
#include <math.h>

class Cardioid
{

public:
    Cardioid();

    const static double PI = 3.14159;

    int radius;
    int angle;

    int getArea() { return 6 * PI * radius * radius; }

    float getRadiusOfCurvature() { return 8/3 * radius * sin(angle/2); }

};

#endif // CARDIOID_H
