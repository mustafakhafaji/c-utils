#include "../Vector/vector.h"

typedef struct Matrix Matrix;

// Returns a 4x4 identity matrix.
Matrix* Matrix_Create();

// Returns sum of two matrices.
Matrix* Matrix_Add(const Matrix* a, const Matrix* b);

// Returns product of two matrices.
Matrix* Matrix_Multiply(const Matrix* a, const Matrix* b);

// Returns translated matrix.
Matrix* Matrix_Translation(const Matrix* initial_matrix, const Vector* factor);

// Returns rotated matrix.
Matrix* Matrix_Rotation(const Matrix* initial_matrix, const float* angle, const Vector* planes);

// Returns a perspective matrix.
Matrix* Matrix_Perspective(
    const int field_of_view, 
    const float aspect_ratio, 
    const float near_distance, 
    const float far_distance);