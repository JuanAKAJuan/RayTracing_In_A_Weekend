//
// Created by Juan Mireles on 2/20/23.
//

#include "Vector3.h"

Vector3& Vector3::operator+=(const Vector3& otherVector)
{
    e[0] += otherVector.e[0];
    e[1] += otherVector.e[1];
    e[2] += otherVector.e[2];
    return *this;
}

Vector3& Vector3::operator*=(const double t)
{
    e[0] *= t;
    e[1] *= t;
    e[2] *= t;
    return *this;
}

Vector3& Vector3::operator/=(const double t)
{
    return *this *= 1/t;
}

double Vector3::LengthSquared() const
{
    return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
}

double Vector3::Length() const
{
    return sqrt(LengthSquared());
}

/* Vector3 Utility Functions */
inline std::ostream& operator<<(std::ostream& out, const Vector3& otherVector)
{
    return out << otherVector.e[0] << ' ' << otherVector.e[1] << ' ' << otherVector.e[2];
}

inline Vector3 operator+(const Vector3& u, const Vector3& otherVector)
{
    return Vector3(u.e[0] + otherVector.e[0], u.e[1] + otherVector.e[1], u.e[2] + otherVector.e[2]);
}

inline Vector3 operator-(const Vector3& u, const Vector3& otherVector)
{
    return Vector3(u.e[0] - otherVector.e[0], u.e[1] - otherVector.e[1], u.e[2] - otherVector.e[2]);
}

inline Vector3 operator*(const Vector3& u, const Vector3& otherVector)
{
    return Vector3(u.e[0] * otherVector.e[0], u.e[1] * otherVector.e[1], u.e[2] * otherVector.e[2]);
}

inline Vector3 operator*(double t, const Vector3& otherVector)
{
    return Vector3(t*otherVector.e[0], t*otherVector.e[1], t*otherVector.e[2]);
}

inline Vector3 operator/(Vector3 otherVector, double t)
{
    return (1/t) * otherVector;
}

inline double Vector3::dot(const Vector3& u, const Vector3& otherVector)
{
    return u.e[0] * otherVector.e[0]
        +  u.e[1] * otherVector.e[1]
        +  u.e[2] * otherVector.e[2];
}

inline Vector3 Vector3::cross(const Vector3& u, const Vector3& otherVector)
{
    return Vector3(u.e[1] * otherVector.e[2] - u.e[2] * otherVector.e[1],
                   u.e[2] * otherVector.e[0] - u.e[0] * otherVector.e[2],
                   u.e[0] * otherVector.e[1] - u.e[1] * otherVector.e[0]);
}

inline Vector3 Vector3::UnitVector(Vector3 otherVector)
{
    return otherVector / otherVector.Length();
}