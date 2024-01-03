typedef struct Vector3 {
    float x, y, z;
} Vector3;

// Create vector.
Vector3* Vector3_Create(float x, float y, float z, float w);

// Returns sum of 2 vectors.
Vector3* Vector3_Add(const Vector3* a, const Vector3* b);

// Returns product of 2 vectors.
Vector3* Vector3_Multiply(const Vector3* a, const Vector3* b);

// Returns result of a / b.
Vector3* Vector3_Divide(const Vector3* a, const Vector3* b);

// Returns 1 if given vectors are equal.
int Vector3_isEqual(const Vector3* a, const Vector3* b);

// Returns length of a vector.
float Vector3_Length(const Vector3* a);

// Returns dot product of given vectors.
float Vector3_Dot(const Vector3* a, const Vector3* b);

// Returns cross product of given vectors.
Vector3* Vector3_Cross(const Vector3* a, const Vector3* b);