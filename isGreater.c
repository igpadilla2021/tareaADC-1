# include <stdio.h>

int isGreater(int x, int y) {
    return !(~((x+((~y)+1))>>31)+1);  
}

//TESTEO
int main(){
    printf("%d\n",isGreater(-4,-3));
    return 0;
}