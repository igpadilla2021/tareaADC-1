#include <stdio.h>

int bitNor(int x, int y) {
    return ~x & ~y;
}

int main() {
    int x, y;
    scanf("%d%d",&x,&y);
    int res = bitNor(x, y);
    printf("%d\n", res);
    
    return 0;
}
