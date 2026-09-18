#include <stdio.h>

int main(void) {
    int nombre;
    int bits[32];
    int i = 0;
    int j;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    if (nombre == 0) {
        printf("La représentation binaire est : 0\n");
        return 0;
    }

    while (nombre > 0) {
        bits[i] = nombre % 2;
        nombre = nombre / 2;
        i++;
    }

    printf("La représentation binaire est : ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");

    return 0;
}
