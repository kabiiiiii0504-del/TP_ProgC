#include <stdio.h>

#define N 10
#define MAX_LEN 200

// Fonction pour comparer deux chaînes de caractères
int chaines_egales(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; // Différence trouvée
        }
        i++;
    }
    // Les deux chaînes doivent se terminer en même temps
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Tableau de 10 phrases
    char phrases[N][MAX_LEN] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[MAX_LEN];
    int trouve = 0;

    // Saisie de la phrase à rechercher
    printf("Entrez la phrase à rechercher : ");
    fgets(recherche, MAX_LEN, stdin);

    // Retirer le '\n' à la fin si présent
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche dans le tableau
    for (i = 0; i < N; i++) {
        if (chaines_egales(recherche, phrases[i])) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
