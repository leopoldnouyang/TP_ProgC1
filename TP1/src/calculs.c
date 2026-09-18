#include <stdio.h>

int main(void) {
    int num1 = 12;
    int num2 = 5;
    char op = '&';

    switch (op) {
        case '+':
            printf("Addition : %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Soustraction : %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Multiplication : %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("Division : %d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case '%':
            printf("Modulo : %d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        case '&':
            printf("ET binaire : %d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("OU binaire : %d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("NON binaire sur %d : ~%d = %d\n", num1, num1, ~num1);
            break;
        default:
            printf("Operateur inconnu\n");
            break;
    }

    return 0;
}

