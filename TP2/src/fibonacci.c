#include <stdio.h>

int main() {
    int n;
    int U0 = 0;
    int U1 = 1;
    int Un;

    printf("Entrez une valeur n : ");
    scanf("%d", &n);

    // Cas particuliers
    if (n >= 0) {
        printf("%d ", U0);
    }
    if (n >= 1) {
        printf("%d ", U1);
    }

    // Calcul des termes suivants
    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;
        printf("%d ", Un);

        // Mise à jour des deux derniers termes
        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
