#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int numbers[] = {5, 2, 8, 1, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original ");
    print_array(numbers, size);

    qsort(numbers, size, sizeof(int), compare);

    printf("Sorted ");
    print_array(numbers, size);

    return 0;
}
