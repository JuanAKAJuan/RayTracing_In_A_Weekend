//
// Created by Juan Mireles on 2/20/23.
//

#include "Vector3.h"

Vector3::Vector3() : e{0, 0, 0} {}

Vector3::Vector3(double e0, double e1, double e2) : e{e0, e1, e2} {}

double Vector3::X() const { return e[0]; }
double Vector3::Y() const { return e[1]; }
double Vector3::Z() const { return e[2]; }

Vector3 Vector3::operator-() const { return Vector3(-e[0], -e[1], -e[2]); }
double Vector3::operator[](int i) const { return e[i]; }
double& Vector3::operator[](int i) { return e[i]; }
Vector3& Vector3::operator+=(const Vector3& otherVector)
{
    e[0] += otherVector.e[0];
    e[1] += otherVector.e[1];
    e[2] += otherVector.e[2];
    return *this;
}