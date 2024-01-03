typedef struct Vector {
    float x, y, z, w;
} Vector;

// Create vector.
Vector* Vector_Create(float x, float y, float z, float w);

// Returns sum of 2 vectors.
Vector* Vector_Add(const Vector* a, const Vector* b);

// Returns product of 2 vectors.
Vector* Vector_Multiply(const Vector* a, const Vector* b);

// Returns result of a / b.
Vector* Vector_Divide(const Vector* a, const Vector* b);

// Returns 1 if given vectors are equal.
int Vector_isEqual(const Vector* a, const Vector* b);

// Returns length of a vector.
float Vector_Length(const Vector* a);

// Returns dot product of given vectors.
float Vector_Dot(const Vector* a, const Vector* b);

// Returns cross product of given vectors.
Vector* Vector_Cross(const Vector* a, const Vector* b);