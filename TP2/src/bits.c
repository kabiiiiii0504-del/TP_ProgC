#include <stdio.h>

int main() {
    int d = 0x10001000;  // valeur d'exemple
    int bit4gauche, bit20gauche;
    int resultat;

    // On considère un entier sur 32 bits
    // Calcul de la position des bits (32 - n)
    int pos4 = 32 - 4;    // position du 4e bit de gauche → 28
    int pos20 = 32 - 20;  // position du 20e bit de gauche → 12

    // Extraction des bits
    bit4gauche = (d >> pos4) & 1;
    bit20gauche = (d >> pos20) & 1;

    // Vérification
    if (bit4gauche == 1 && bit20gauche == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }

    printf("%d\n", resultat);

    return 0;
}
