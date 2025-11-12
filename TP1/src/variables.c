#include <stdio.h>

int main() {
    // Déclaration et affectation des variables
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 54321;

    int i = -123456;
    unsigned int ui = 123456;

    long int li = -123456789L;
    unsigned long int uli = 123456789UL;

    long long int lli = -9876543210LL;
    unsigned long long int ulli = 9876543210ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Affichage des valeurs
    printf("=== Variables de types de base ===\n\n");

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("short : %d\n", s);
    printf("unsigned short : %u\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
