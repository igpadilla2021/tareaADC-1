# include <stdio.h>

//FUNCION
int bitNor(int x, int y) {
    x=~x;
    y=~y;
    return x&y ;
}


// TESTEO
int main(){
    printf("%d \n",bitNor(4,5));  
    printf("%d \n",bitNor(0x06,0x05));  
    return 0;
}
