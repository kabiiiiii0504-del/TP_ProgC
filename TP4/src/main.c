#include <stdio.h>
#include "operator.h"
#include "operator.c"

int main() {
    int num1, num2, resultat;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);  // espace avant %c pour ignorer les retours à la ligne

    switch(op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': 
            if(num2 != 0) resultat = quotient(num1, num2);
            else { printf("Erreur : division par zéro !\n"); return 1; }
            break;
        case '%': 
            if(num2 != 0) resultat = modulo(num1, num2);
            else { printf("Erreur : modulo par zéro !\n"); return 1; }
            break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1); break;
        default:
            printf("Opérateur invalide !\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}

