typedef struct Vector4 {
    float x, y, z, w;
} Vector4;

// Creates a vector of length 4.
//
// @param x value of x.
// @param y value of y.
// @param z value of z.
// @param w value of w.
// @return Pointer to Vector3 with given values.
Vector4* Vector4_Create(float x, float y, float z, float w);

// Adds two given vector4s.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to sum of vectors.
Vector4* Vector4_Add(const Vector4* a, const Vector4* b);

// Multiplies two given vector4s.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to product of vectors.
Vector4* Vector4_Multiply(const Vector4* a, const Vector4* b);

// Divides vectors a / b.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to result of a / b.
Vector4* Vector4_Divide(const Vector4* a, const Vector4* b);

// Determines whether two vectors4 are equal.
//
// @param a first vector.
// @param b second vector.
// @return 1 = true, 0 = false.
int Vector4_isEqual(const Vector4* a, const Vector4* b);

// Calculates the length of a vector.
//
// @param a Vector to determine length of.
// @return Length of vector.
double Vector4_Length(const Vector4* a);

// Calculates the dot product of two vectors.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to dot product vector.
float Vector4_Dot(const Vector4* a, const Vector4* b);