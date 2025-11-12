#include <stdio.h>

int main(void)
{
    printf("Taille des types de base (en octets) :\n\n");

    printf("char / signed char / unsigned char : %zu / %zu / %zu\n",
           sizeof(char), sizeof(signed char), sizeof(unsigned char));

    printf("short / unsigned short : %zu / %zu\n",
           sizeof(short), sizeof(unsigned short));

    printf("int / unsigned int : %zu / %zu\n",
           sizeof(int), sizeof(unsigned int));

    printf("long int / unsigned long int : %zu / %zu\n",
           sizeof(long int), sizeof(unsigned long int));

    printf("long long int / unsigned long long int : %zu / %zu\n",
           sizeof(long long int), sizeof(unsigned long long int));

    printf("float : %zu\n", sizeof(float));
    printf("double : %zu\n", sizeof(double));
    printf("long double : %zu\n", sizeof(long double));

    return 0;
}
