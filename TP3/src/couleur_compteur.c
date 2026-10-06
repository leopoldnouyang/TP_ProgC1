#include <stdio.h>

void print_color_count(const char *color, int count) {
    printf("Color: %s, Count: %d\n", color, count);
}

int main() {
    char color[20];
    int count;

    printf("Enter a color: ");
    scanf("%19s", color);
    printf("Enter the count: ");
    scanf("%d", &count);

    print_color_count(color, count);

    return 0;
}
