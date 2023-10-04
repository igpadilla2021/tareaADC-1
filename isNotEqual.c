# include <stdio.h>

int isNotEqual(int x, int y){
    int aux= x^y;
    // si al aplicar el operador ^ si todos los valores son iguales nos dara 0
    // por lo que al aplicar ! sabremos si los valores son iguales o no
    return !!aux;
}

int main(){
    printf("%d\n",isNotEqual(0x000,0x000));
    printf("%d\n",isNotEqual(0b1001,0b1100));
    printf("%d\n",isNotEqual(0b1001,0b1001));
}
