//
// Created by Juan Mireles on 2/20/23.
//

#ifndef RAYTRACING_IN_A_WEEKEND_VECTOR3_H
#define RAYTRACING_IN_A_WEEKEND_VECTOR3_H

#include <iostream>
#include <cmath>

class Vector3
{
    public:
        double e[3];
    public:
        Vector3();
        Vector3(double e0, double e1, double e3);

        double X() const;
        double Y() const;
        double Z() const;

        Vector3 operator-() const;
        double operator[](int i) const;
        double& operator[](int i);
        Vector3& operator+=(const Vector3& otherVector);
};


#endif //RAYTRACING_IN_A_WEEKEND_VECTOR3_H
