#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
    return EXIT_SUCCESS;
}
