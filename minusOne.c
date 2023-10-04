# include <stdio.h>

// FUNCION
int minusOne(){
    // mediante el uso del operador not de c y la adicion de 1  a la cosntante n se 
    //termina por representar la contante -1 en complemento a dos
    int n=0x01; 
    n=~n; 
    n++; 
    return n;
}

// TESTEO
int main(){
    printf("%d",minusOne());
    return 0;
}
