#include <stdio.h>
#include <inttypes.h>  // Pour les macros de formatage des entiers

int main() {
    // Déclaration des variables
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678abcdef00;
    long long int lli = 0x123456789abcdef0;
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238;

    // Déclaration des pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // ---------------------------------------
    // Affichage avant manipulation
    // ---------------------------------------
    printf("=== Avant manipulation ===\n");
    printf("Adresse de c : %p, Valeur : 0x%02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : 0x%04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : 0x%08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur : 0x%016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur : 0x%016llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f : %p, Valeur : 0x%08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : 0x%016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : 0x%016llx (approx)\n", (void*)pld, *(unsigned long long*)&ld);

    // ---------------------------------------
    // Manipulation via pointeurs
    // ---------------------------------------
    *pc += 1;
    *ps += 1;
    *pi += 1;
    *pli += 1;
    *plli += 1;
    *(unsigned int*)pf += 1;
    *(unsigned long long*)pd += 1;
    *(unsigned long long*)pld += 1; // approximation

    // ---------------------------------------
    // Affichage après manipulation
    // ---------------------------------------
    printf("\n=== Après manipulation ===\n");
    printf("Adresse de c : %p, Valeur : 0x%02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur : 0x%04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur : 0x%08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur : 0x%016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur : 0x%016llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f : %p, Valeur : 0x%08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : 0x%016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : 0x%016llx (approx)\n", (void*)pld, *(unsigned long long*)&ld);

    return 0;
}
