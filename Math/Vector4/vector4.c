#include <math.h>
#include <stdlib.h>
#include "Vector4.h"

typedef struct Vector4 {
    float x, y, z, w;
} Vector4;

Vector4* Vector4_Create(float x, float y, float z, float w) {
    Vector4* vector = malloc(sizeof(Vector4));
    vector->x = x;
    vector->y = y;
    vector->z = z;
    vector->w = w;
    return vector;
}

Vector4* Vector4_Add(const Vector4* a, const Vector4* b) {
    Vector4* c = malloc(sizeof(Vector4));
    c->x = a->x + b->x;
    c->y = a->y + b->y;
    c->z = a->z + b->z;
    c->w = a->w + b->w;
    return c;
}

Vector4* Vector4_Multiply(const Vector4* a, const Vector4* b) {
    Vector4* c = malloc(sizeof(Vector4));
    c->x = a->x * b->x;
    c->y = a->y * b->y;
    c->z = a->z * b->z;
    c->w = a->w * b->w;
    return c;
}

Vector4* Vector4_Divide(const Vector4* a, const Vector4* b) {
    Vector4* c = malloc(sizeof(Vector4));
    c->x = a->x / b->x;
    c->y = a->y / b->y;
    c->z = a->z / b->z;
    c->w = a->w / b->w;
    return c;
}

int Vector4_isEqual(const Vector4* a, const Vector4* b) {
    return
    a->x == b->x && 
    a->y == b->y && 
    a->z == b->z && 
    a->w == a->w;
}

float Vector4_Length(const Vector4* a) {
    return sqrt(
        a->x * a->x +
        a->y * a->y +
        a->z * a->z + 
        a->w * a->w
    );
}

float Vector4_Dot(const Vector4* a, const Vector4* b) {
    return 
    a->x * b->x + 
    a->y * b->y + 
    a->z * b->z +
    a->w * b->w;
}