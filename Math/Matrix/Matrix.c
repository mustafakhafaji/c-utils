#include <stdlib.h>
#include <math.h>
#include "../Vector/Vector.h"

typedef struct Matrix {
    int size_m;
    int size_n;
    int error;
    float values[16];
} Matrix;

Matrix* Matrix_Create() {
    Matrix* matrix = malloc(sizeof(Matrix));

    matrix->size_m = 4;
    matrix->size_n = 4;
    matrix->error = 0;
    
    for (int i = 0; i < 16; i++) {
            matrix->values[i] = 0.0f;
    }
    matrix->values[0] = matrix->values[5] = matrix->values[10] = matrix->values[15] = 1.0f;

    return matrix;
}

Matrix* Matrix_Add(const Matrix* a, const Matrix* b) {
    Matrix* c = Matrix_Create();

    if (a->size_m != b->size_m || a->size_n != b->size_n) {
        c->error = 1;
        return c;
    }

    for (int i = 0; i < a->size_m * a->size_n; i++) {
        c->values[i] = a->values[i] + b->values[i];
    }

    return c;
}

// TODO
Matrix* Matrix_Multiply(const Matrix* a, const Matrix* b) {
    Matrix* c = Matrix_Create();

    return c;
}

Matrix* Matrix_Translation(const Matrix* initial_matrix, const Vector* factor) {
    Matrix* matrix = malloc(sizeof(Matrix));

    matrix->values[3] += factor->x;
    matrix->values[7] += factor->y;
    matrix->values[11] += factor->z;

    return matrix;
}

// TODO
Matrix* Matrix_Rotation(const Matrix* initial_matrix, const float* angle, const Vector* planes) {
    
}

Matrix* Matrix_Perspective(
    const int field_of_view, 
    const float aspect_ratio, 
    const float near_distance, 
    const float far_distance) {
        Matrix* matrix = Matrix_Create();

        float half_tan = tanf(field_of_view * 0.5f);
        float range = far_distance - near_distance;

        matrix->values[0] = 1.0f / (aspect_ratio * half_tan);
        matrix->values[5] = 1.0f / half_tan;
        matrix->values[10] = (near_distance + far_distance) / range;
        matrix->values[11] = -1.0f;
        matrix->values[14] = 2.0f * near_distance * far_distance / range;

        return matrix;
}