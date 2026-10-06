#include <stdio.h>

void print_array_info(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    printf("Array address: %p\n", (void *)arr);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    print_array_info(numbers, size);

    return 0;
}
