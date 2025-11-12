#include <stdio.h>

int main(void)
{
    int num1 = 10, num2 = 3;
    char op = '+';

    switch (op) {
        case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2); break;
        case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2); break;
        case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2); break;
        case '/': if (num2) printf("%d / %d = %d\n", num1, num2, num1 / num2);
                  else printf("Division par zéro !\n"); break;
        case '%': if (num2) printf("%d %% %d = %d\n", num1, num2, num1 % num2);
                  else printf("Modulo par zéro !\n"); break;
        case '&': printf("%d & %d = %d\n", num1, num2, num1 & num2); break;
        case '|': printf("%d | %d = %d\n", num1, num2, num1 | num2); break;
        case '~': printf("~%d = %d, ~%d = %d\n", num1, ~num1, num2, ~num2); break;
        default:  printf("Opérateur inconnu !\n");
    }

    return 0;
}


