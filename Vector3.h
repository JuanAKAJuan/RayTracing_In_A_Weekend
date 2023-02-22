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
        Vector3() : e{0, 0, 0} {}
        Vector3(double e0, double e1, double e2) : e{e0, e1, e2} {}

        double X() const { return e[0]; }
        double Y() const { return e[1]; }
        double Z() const { return e[2]; }

        Vector3 operator-() const { return Vector3(-e[0], -e[1], -e[2]); }
        double operator[](int i) const { return e[i]; }
        double& operator[](int i) { return e[i]; }

        Vector3& operator+=(const Vector3& otherVector);
        Vector3& operator*=(const double t);
        Vector3& operator/=(const double t);
        double LengthSquared() const;
        double Length() const;

        /* Vector3 Utility Functions */
        friend inline std::ostream& operator<<(std::ostream &out, const Vector3 &otherVector);
        friend inline Vector3 operator+(const Vector3& u, const Vector3& otherVector);
        friend inline Vector3 operator-(const Vector3& u, const Vector3& otherVector);
        friend inline Vector3 operator*(const Vector3& u, const Vector3& otherVector);
        friend inline Vector3 operator*(double t, const Vector3& otherVector);
        friend inline Vector3 operator/(Vector3 otherVector, double t);
        inline double dot(const Vector3& u, const Vector3& otherVector);
        inline Vector3 cross(const Vector3& u, const Vector3& otherVector);
        inline Vector3 UnitVector(Vector3 otherVector);
};

// Type aliases for Vector3
using Point3 = Vector3;    // 3D point
using Color = Vector3;    // RGB color

#endif //RAYTRACING_IN_A_WEEKEND_VECTOR3_H
