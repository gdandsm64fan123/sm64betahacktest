#include "libultra_internal.h"

void guRotateF(float m[4][4], float a, float x, float y, float z) {
    static f32 pi_180 = GU_PI / 180.0f;
    f32 sin_a;
    f32 cos_a;
    f32 ab;
    f32 bc;
    f32 ca;
    f32 t;
    f32 xx, yy, zz;

    guNormalize(&x, &y, &z);

    a = a * pi_180;

    sin_a = sinf(a);
    cos_a = cosf(a);
    t = 1 - cos_a;

    ab = x * y * t;
    bc = y * z * t;
    ca = z * x * t;

    guMtxIdentF(m);

    // TODO: Merge IDO/GCC
    xx = x * x;
    m[0][0] = xx + cos_a * (1 - xx);
    m[2][1] = bc - (x * sin_a);
    m[1][2] = bc + (x * sin_a);

    yy = y * y;
    m[1][1] = yy + cos_a * (1 - yy);
    m[2][0] = ca + (y * sin_a);
    m[0][2] = ca - (y * sin_a);

    zz = z * z;
    m[2][2] = zz + cos_a * (1 - zz);
    m[1][0] = ab - (z * sin_a);
    m[0][1] = ab + (z * sin_a);
}

void guRotate(Mtx *m, float a, float x, float y, float z) {
    float mf[4][4];
    guRotateF(mf, a, x, y, z);
    guMtxF2L(mf, m);
}
