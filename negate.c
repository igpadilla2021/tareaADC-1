# include <stdio.h>

//tengo dudas con este
int negate(int x) {
    x=~x;
    return x+1;
}

int main(){
    printf("%d\n",negate(-2));
}