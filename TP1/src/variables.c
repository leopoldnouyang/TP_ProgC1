#include <stdio.h>

int main(void) {
    // 1. Caractères
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // 2. Entiers courts
    short s = -32768;
    unsigned short us = 65535;

    // 3. Entiers standards
    int i = -2147483648;
    unsigned int ui = 4294967295U;

    // 4. Entiers longs
    long l = -9223372036854775807L;
    unsigned long ul = 18446744073709551615UL;

    // 5. Entiers très longs
    long long ll = -9223372036854775807LL;
    unsigned long long ull = 18446744073709551615ULL;

    // 6. Nombres à virgule flottante
    float f = 3.14159f;
    double d = 2.718281828459045;
    long double ld = 1.6180339887498948482L;

    // Affichage des valeurs
    printf("--- Valeurs des variables de types de base ---\n\n");

    // Affichage des caractères
    printf("char : %c (valeur ASCII : %d)\n", c, c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    // Affichage des entiers courts
    printf("short : %d\n", s);
    printf("unsigned short : %u\n", us);

    // Affichage des entiers standards
    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    // Affichage des entiers longs
    printf("long : %ld\n", l);
    printf("unsigned long : %lu\n", ul);

    // Affichage des entiers très longs
    printf("long long : %lld\n", ll);
    printf("unsigned long long : %llu\n", ull);

    // Affichage des nombres à virgule flottante
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}