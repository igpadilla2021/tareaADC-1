#include <stdio.h>

int getByte(int x,int n) {
    int byte = (x>>(n << 3))&0xFF;
    return byte;
}

int main() {
    int res = getByte(0x12345678,1);
    printf(" 0x%02X\n",res);
    return 0;
}

