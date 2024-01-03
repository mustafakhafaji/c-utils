typedef struct Vector2 {
    float x, y;
} Vector2;

Vector2* Vector2_Create(float x, float y, float z, float w);

Vector2* Vector2_Add(const Vector2* a, const Vector2* b);

Vector2* Vector2_Multiply(const Vector2* a, const Vector2* b);

Vector2* Vector2_Divide(const Vector2* a, const Vector2* b);

int Vector2_isEqual(const Vector2* a, const Vector2* b);

float Vector2_Length(const Vector2* a);

float Vector2_Dot(const Vector2* a, const Vector2* b);