#ifndef CARDIOID_H
#define CARDIOID_H
#include <math.h>

class Cardioid
{

public:
    Cardioid();

    int radius;
    int angle;

    int getArea() { return 6 * M_PI * radius * radius; }

    double getRadiusOfCurvature() { return 8.0/3.0 * radius * sin(angle/2*M_PI/180); }

};

#endif // CARDIOID_H
