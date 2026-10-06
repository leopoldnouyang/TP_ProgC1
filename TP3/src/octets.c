#include <stdio.h>

void print_byte_info(const char *label, unsigned char byte) {
    printf("%s: %02X\n", label, byte);
}

int main() {
    unsigned char byte1 = 0xAB;
    unsigned char byte2 = 0xCD;

    print_byte_info("Byte 1", byte1);
    print_byte_info("Byte 2", byte2);

    return 0;
}
