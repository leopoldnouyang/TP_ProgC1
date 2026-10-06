#include <stdio.h>

int main() {
    int num = 42;
    float fnum = 3.14;
    char str[] = "Hello, World!";

    printf("Size of int: %zu bytes\n", sizeof(num));
    printf("Size of float: %zu bytes\n", sizeof(fnum));
    printf("Size of string: %zu bytes\n", sizeof(str));

    return 0;
}
