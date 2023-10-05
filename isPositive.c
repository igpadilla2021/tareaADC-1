# include <stdio.h>

int reverseBytes(int x) {
    x=x>>31;
    return !x;
}

int main(){
    printf("%d",reverseBytes(-30010202));
    return 0;
}