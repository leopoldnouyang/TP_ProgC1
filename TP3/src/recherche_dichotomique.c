#include <stdio.h>

int binary_search(int *arr, int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int target;
    printf("Enter a number to search: ");
    scanf("%d", &target);
    int result = binary_search(numbers, sizeof(numbers) / sizeof(numbers[0]), target);
    if (result != -1) {
        printf("Number found at index: %d\n", result);
    } else {
        printf("Number not found\n");
    }
    return 0;
}
