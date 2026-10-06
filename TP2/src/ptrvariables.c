#include <stdio.h>

void print_variable_info(int *ptr) {
    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", (void *)ptr);
}

int main() {
    int num = 42;
    int *ptr = &num;

    print_variable_info(ptr);

    return 0;
}
