typedef struct Vector2 {
    float x, y;
} Vector2;

// Creates a vector of length 2.
//
// @param x value of x.
// @param y value of y.
// @return Pointer to Vector2 with given values.
Vector2* Vector2_Create(float x, float y);

// Adds two given vector2s.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to sum of vectors.
Vector2* Vector2_Add(const Vector2* a, const Vector2* b);

// Multiplies two given vector2s.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to product of vectors.
Vector2* Vector2_Multiply(const Vector2* a, const Vector2* b);

// Divides vectors a / b.
//
// @param a first vector.
// @param b second vector.
// @return Pointer to result of a / b.
Vector2* Vector2_Divide(const Vector2* a, const Vector2* b);

// Determines whether two vectors2 are equal.
//
// @param a first vector.
// @param b second vector.
// @return 1 = true, 0 = false.
int Vector2_isEqual(const Vector2* a, const Vector2* b);

// Calculates the length of a vector.
//
// @param a Vector to determine length of.
// @return Length of vector.
double Vector2_Length(const Vector2* a);

// Calculates dot product of two given vectors.
//
// @param a first vector.
// @param b second vector.
// @return Dot product of both vectors
float Vector2_Dot(const Vector2* a, const Vector2* b);