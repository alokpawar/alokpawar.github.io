#include <stdio.h>

unsigned char swap_nibble(unsigned char x) {

    return (((x & 0x0f) << 4) | ((x & 0xf0) >> 4));
}

int main () {

    unsigned char x = 0xF5;
    printf("%x\n", x);
    printf("%x\n",swap_nibble(x));
    return 0;
}

