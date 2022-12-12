#include <stdio.h>

// I'm not expecting you to understand this yet
void printBinary(void *data,size_t size) {
    unsigned char * mydata = (unsigned char*) data;
    for (size_t i = 0; i < size; i++) {
        if (mydata[i] & 0b10000000) putchar('1'); else putchar('0');
        if (mydata[i] & 0b01000000) putchar('1'); else putchar('0');
        if (mydata[i] & 0b00100000) putchar('1'); else putchar('0');
        if (mydata[i] & 0b00010000) putchar('1'); else putchar('0');
        if (mydata[i] & 0b00001000) putchar('1'); else putchar('0');
        if (mydata[i] & 0b00000100) putchar('1'); else putchar('0');
        if (mydata[i] & 0b00000010) putchar('1'); else putchar('0');
        if (mydata[i] & 0b00000001) putchar('1'); else putchar('0');
    }
    putchar('\n');
}

int main(int argc,char *argv[]) {
    char a = 85;
    printBinary(&a,1);   // 01010101
    char b = -43;
    printBinary(&b,1);   // 11010101
    char c = a + b;
    printBinary(&c,1);   // 00101010
    return 0;
}