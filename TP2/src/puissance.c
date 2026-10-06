#include <stdio.h>

void print_power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    printf("%d^%d = %d\n", base, exponent, result);
}

int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    print_power(base, exponent);
    return 0;
}
