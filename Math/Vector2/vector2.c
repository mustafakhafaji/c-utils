#include <math.h>
#include <stdlib.h>
#include "Vector2.h"

typedef struct Vector2 {
    float x, y;
} Vector2;

Vector2* Vector2_Create(float x, float y, float z, float w) {
    Vector2* vector = malloc(sizeof(Vector2));
    vector->x = x;
    vector->y = y;
    return vector;
}

Vector2* Vector2_Add(const Vector2* a, const Vector2* b) {
    Vector2* c = malloc(sizeof(Vector2));
    c->x = a->x + b->x;
    c->y = a->y + b->y;
    return c;
}

Vector2* Vector2_Multiply(const Vector2* a, const Vector2* b) {
    Vector2* c = malloc(sizeof(Vector2));
    c->x = a->x * b->x;
    c->y = a->y * b->y;
    return c;
}

Vector2* Vector2_Divide(const Vector2* a, const Vector2* b) {
    Vector2* c = malloc(sizeof(Vector2));
    c->x = a->x / b->x;
    c->y = a->y / b->y;
    return c;
}

int Vector2_isEqual(const Vector2* a, const Vector2* b) {
    return
    a->x == b->x && 
    a->y == b->y;
}

float Vector2_Length(const Vector2* a) {
    return sqrt(
        a->x * a->x +
        a->y * a->y
    );
}

float Vector2_Dot(const Vector2* a, const Vector2* b) {
    return 
    a->x * b->x + 
    a->y * b->y;
}