#include <stdio.h>

void print_color_info(const char *color) {
    printf("Color: %s\n", color);
}

int main() {
    char color[20];

    printf("Enter a color: ");
    scanf("%19s", color);

    print_color_info(color);

    return 0;
}
