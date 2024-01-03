#include <math.h>
#include <stdlib.h>
#include "Vector3.h"

typedef struct Vector3 {
    float x, y, z;
} Vector3;

Vector3* Vector3_Create(float x, float y, float z, float w) {
    Vector3* vector = malloc(sizeof(Vector3));
    vector->x = x;
    vector->y = y;
    vector->z = z;
    return vector;
}

Vector3* Vector3_Add(const Vector3* a, const Vector3* b) {
    Vector3* c = malloc(sizeof(Vector3));
    c->x = a->x + b->x;
    c->y = a->y + b->y;
    c->z = a->z + b->z;
    return c;
}

Vector3* Vector3_Multiply(const Vector3* a, const Vector3* b) {
    Vector3* c = malloc(sizeof(Vector3));
    c->x = a->x * b->x;
    c->y = a->y * b->y;
    c->z = a->z * b->z;
    return c;
}

Vector3* Vector3_Divide(const Vector3* a, const Vector3* b) {
    Vector3* c = malloc(sizeof(Vector3));
    c->x = a->x / b->x;
    c->y = a->y / b->y;
    c->z = a->z / b->z;
    return c;
}

int Vector3_isEqual(const Vector3* a, const Vector3* b) {
    return (
        a->x == b->x
        && a->y == b->y
        && a->z == b->z
    );
}

float Vector3_Length(const Vector3* a) {
    return sqrt(
        a->x * a->x +
        a->y * a->y +
        a->z * a->z
    );
}

float Vector3_Dot(const Vector3* a, const Vector3* b) {
    return 
    a->x * b->x + 
    a->y * b->y + 
    a->z * b->z;
}

Vector3* Vector3_Cross(const Vector3* a, const Vector3* b) {
    Vector3* c = malloc(sizeof(Vector3));
    c->x = a->y * b->z - a->z * b->y;
    c->y = a->z * b->x - a->x * b->z;
    c->z = a->x * b->y - a->y * b->x;
    return c;
}