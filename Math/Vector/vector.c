#include <math.h>
#include <stdlib.h>
#include "Vector.h"

typedef struct Vector {
    float x, y, z, w;
} Vector;

Vector* Vector_Add(const Vector* a, const Vector* b) {
    Vector* c = malloc(sizeof(Vector));
    c->x = a->x + b->x;
    c->y = a->y + b->y;
    c->z = a->z + b->z;
    c->w = a->w + b->w;
    return c;
}

Vector* Vector_Multiply(const Vector* a, const Vector* b) {
    Vector* c = malloc(sizeof(Vector));
    c->x = a->x * b->x;
    c->y = a->y * b->y;
    c->z = a->z * b->z;
    c->w = a->w * b->w;
    return c;
}

Vector* Vector_Divide(const Vector* a, const Vector* b) {
    Vector* c = malloc(sizeof(Vector));
    c->x = a->x / b->x;
    c->y = a->y / b->y;
    c->z = a->z / b->z;
    c->w = a->w / b->w;
    return c;
}

int Vector_isEqual(const Vector* a, const Vector* b) {
    return (
        a->x == b->x
        && a->y == b->y
        && a->z == b->z
        && a->w == b->w
    );
}

float Vector_Length(const Vector* a) {
    return sqrt(
        a->x * a->x +
        a->y * a->y +
        a->z * a->z
    );
}

float Vector_Dot(const Vector* a, const Vector* b) {
    return 
    a->x * b->x + 
    a->y * b->y + 
    a->z * b->z + 
    a->w * b->w;
}

Vector* Vector_Cross(const Vector* a, const Vector* b) {
    Vector* c = malloc(sizeof(Vector));
    c->x = a->y * b->z - a->z * b->y;
    c->y = a->z * b->x - a->x * b->z;
    c->z = a->x * b->y - a->y * b->x;
    return c;
}