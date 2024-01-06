#include "../Vector3/vector3.h"

typedef struct Matrix Matrix;

// Initalizes a 4x4 identity matrix.
//
// @return pointer to 4x4 identity matrix.
Matrix* Matrix_Create();

// Adds two given matrices.
//
// @param a Matrix (a) + b
// @param b Matrix a + (b)
// @return pointer to 4x4 matrix of sum.
Matrix* Matrix_Add(const Matrix* a, const Matrix* b);

// Multiplies two given matrices.
//
// @param a Matrix (a) * b
// @param b Matrix a * (b)
// @return pointer to 4x4 matrix of product.
Matrix* Matrix_Multiply(const Matrix* a, const Matrix* b);

// Returns translated matrix.
Matrix* Matrix_Translation(const Matrix* initial_matrix, const Vector3* factor);

// Returns rotated matrix.
Matrix* Matrix_Rotation(const Matrix* initial_matrix, const float* angle, const Vector3* planes);

// Returns a perspective matrix.
Matrix* Matrix_Perspective(
    const int field_of_view, 
    const float aspect_ratio, 
    const float near_distance, 
    const float far_distance);