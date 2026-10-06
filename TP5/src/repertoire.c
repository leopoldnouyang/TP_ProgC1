#include "fichier.h"
#include "liste.h"

int main() {
    const char *filename = "data.txt";
    write_file(filename, "Hello, World!\n");
    read_file(filename);
    return 0;
}
