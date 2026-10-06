#include <stdio.h>

void print_bits(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Binary representation of %d is: ", number);
    print_bits(number);

    return 0;
}
