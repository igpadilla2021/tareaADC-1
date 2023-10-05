#include <stdio.h>

int getByte(int x,int n) {
    int byte = (x>>(n*8))&0xFF;
    return byte;
}

int main() {
    int hex,n;
    scanf("%x%d",&hex,&n);
    int res = getByte(hex,n);
    printf(" 0x%02X\n",res);
    return 0;
}

