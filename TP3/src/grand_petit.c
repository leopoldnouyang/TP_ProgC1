#include <stdio.h>

void print_larger_smaller(int a, int b) {
    if (a > b) {
        printf("%d is larger than %d\n", a, b);
    } else if (a < b) {
        printf("%d is smaller than %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    print_larger_smaller(num1, num2);

    return 0;
}
