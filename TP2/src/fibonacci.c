#include <stdio.h>

void print_fibonacci_sequence(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &terms);
    print_fibonacci_sequence(terms);
    return 0;
}
