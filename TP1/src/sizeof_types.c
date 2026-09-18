#include <stdio.h>

int main(void) {
    printf("--- Taille des types de base en C ---\n\n");

    // Caractères
    printf("char : %zu octet(s)\n", sizeof(char));
    printf("signed char : %zu octet(s)\n", sizeof(signed char));
    printf("unsigned char : %zu octet(s)\n", sizeof(unsigned char));

    // Entiers courts
    printf("short : %zu octet(s)\n", sizeof(short));
    printf("unsigned short : %zu octet(s)\n", sizeof(unsigned short));

    // Entiers standards
    printf("int : %zu octet(s)\n", sizeof(int));
    printf("unsigned int : %zu octet(s)\n", sizeof(unsigned int));

    // Entiers longs
    printf("long : %zu octet(s)\n", sizeof(long));
    printf("unsigned long : %zu octet(s)\n", sizeof(unsigned long));

    // Entiers très longs
    printf("long long : %zu octet(s)\n", sizeof(long long));
    printf("unsigned long long : %zu octet(s)\n", sizeof(unsigned long long));

    // Nombres à virgule flottante
    printf("float : %zu octet(s)\n", sizeof(float));
    printf("double : %zu octet(s)\n", sizeof(double));
    printf("long double : %zu octet(s)\n", sizeof(long double));

    return 0;
}
