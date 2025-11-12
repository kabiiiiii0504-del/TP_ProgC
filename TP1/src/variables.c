#include <stdio.h>

int main(void)
{
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 54321;

    int i = -100000;
    unsigned int ui = 3000000000U;

    long l = -2000000000L;
    unsigned long ul = 4000000000UL;

    long long ll = -9000000000000000000LL;
    unsigned long long ull = 18000000000000000000ULL;

    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.61803L;

    printf("char=%c  sc=%d  uc=%u\n", c, sc, uc);
    printf("s=%d  us=%u\n", s, us);
    printf("i=%d  ui=%u\n", i, ui);
    printf("l=%ld  ul=%lu\n", l, ul);
    printf("ll=%lld  ull=%llu\n", ll, ull);
    printf("f=%.2f  d=%.5f  ld=%.5Lf\n", f, d, ld);

    return 0;
}
