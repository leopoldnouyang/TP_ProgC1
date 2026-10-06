#include <stdio.h>

int main() {
    int numbers[5];
    int *ptr = numbers;

    // Input values
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    // Display values
    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
