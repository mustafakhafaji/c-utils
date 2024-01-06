typedef struct Vector3 {
    float x, y, z;
} Vector3;

// Creates a vector of length 3.
//
// @param x value of x.
// @param y value of y.
// @param z value of z.
// @return Pointer to Vector3 with given values.
Vector3* Vector3_Create(float x, float y, float z);

// Adds two given vector3s.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to sum of vectors.
Vector3* Vector3_Add(const Vector3* a, const Vector3* b);

// Multiplies two given vector3s.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to product of vectors.
Vector3* Vector3_Multiply(const Vector3* a, const Vector3* b);

// Divides vectors a / b.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to result of a / b.
Vector3* Vector3_Divide(const Vector3* a, const Vector3* b);

// Determines whether two vectors3 are equal.
//
// @param a first vector.
// @param b second vector.
// @return 1 = true, 0 = false.
int Vector3_isEqual(const Vector3* a, const Vector3* b);

// Calculates the length of a vector.
//
// @param a Vector to determine length of.
// @return Length of vector.
double Vector3_Length(const Vector3* a);

// Calculates the dot product of two vectors.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to dot product vector.
float Vector3_Dot(const Vector3* a, const Vector3* b);

// Calculates the cross product of two vectors.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to cross product vector.
Vector3* Vector3_Cross(const Vector3* a, const Vector3* b);