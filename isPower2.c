# include <stdio.h>
int isPower2(int x) {
    return !((x & (x + (~0))) | (!x));
}

int main(){
    printf("%d", isPower2(-8));
}