#include <stdio.h>
#include <string.h>

void print_string_info(const char *str) {
    printf("String: %s\n", str);
    printf("Length: %lu\n", strlen(str));
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;  // Remove newline character

    print_string_info(input);

    return 0;
}
