#include <stdio.h>

int main(void)
{
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int n = 0; n < taille; n++) {
        unsigned int nombre = nombres[n];
        printf("%u en binaire : ", nombre);

        int bits = sizeof(nombre) * 8; // généralement 32 bits
        int affichage_commence = 0;    // pour ignorer les zéros initiaux

        for (int i = bits - 1; i >= 0; i--) {
            int bit = (nombre >> i) & 1;
            if (bit == 1) affichage_commence = 1; // on commence dès le premier 1
            if (affichage_commence || i == 0)
                printf("%d", bit);
        }
        printf("\n");
    }

    return 0;
}
