# include <stdio.h>

// FUNCION
int isZero(int x) {
    // Al aplicarse el operador not sobre un entero este retornara un 1 si este es 0, sino retorna un 0
    return !x;
}

// TESTEO
int main()
{
    int n;
    //prueba de funcion con entero mayor que 0
    n=isZero(6);
    if (n==1){
        printf("n es equivalente a 0 \n",n);
    }
    else{
        printf("n es distinto de 0 \n",n);
    };

    //prueba de funcion con entero menor que 0
    n=isZero(-1);
    if (n==1){
        printf("n es equivalente a 0 \n",n);
    }
    else{
        printf("n es distinto de 0 \n",n);
    };

    //prueba de funcion con entero igual 0
    n=isZero(0);
    if (n==1){
        printf("n es igual a 0 \n",n);
    }
    else{
        printf("n es distinto de 0 \n",n);
    };
    return 0;
}