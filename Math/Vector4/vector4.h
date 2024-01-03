typedef struct Vector4 {
    float x, y, z, w;
} Vector4;

Vector4* Vector4_Create(float x, float y, float z, float w);

Vector4* Vector4_Add(const Vector4* a, const Vector4* b);

Vector4* Vector4_Multiply(const Vector4* a, const Vector4* b);

Vector4* Vector4_Divide(const Vector4* a, const Vector4* b);

int Vector4_isEqual(const Vector4* a, const Vector4* b);

float Vector4_Length(const Vector4* a);

float Vector4_Dot(const Vector4* a, const Vector4* b);