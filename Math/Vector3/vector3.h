typedef struct Vector3 {
   float x;
   float y;
   float z;
} Vector3;

Vector3* Vector3_Add(const Vector3* a, const Vector3* b);
Vector3 Vector3_Multiply(const Vector3* a, const Vector3* b);
Vector3 Vector3_Divide(const Vector3* a, const Vector3* b);
int Vector3_isEqual(const Vector3* a, const Vector3* b);
int Vector3_Length(const Vector3* a);
int Vector3_Dot(const Vector3* a, const Vector3* b);
Vector3* Vector3_Cross(const Vector3* a, const Vector3* b);