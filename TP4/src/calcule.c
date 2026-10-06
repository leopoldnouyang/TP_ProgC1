#include <stdio.h>

void print_calculation(int a, int b) {
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Division: %d / %d = Undefined (division by zero)\n", a, b);
    }
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    print_calculation(num1, num2);
    return 0;
}
