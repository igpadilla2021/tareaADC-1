/*
    INTEGRANTES:
        -Felipe Eduardo Adolfo Mendoza Ojeda
        -Ignacio Alejandro Padilla Palacios
        -Joaquin Rodrigo Hernandez Espinoza
        -Mauro Sebastian Muñoz Gonzalez
*/


# include <stdio.h>

//   FUNCIONES

int isZero(int x){
    return !x;
}

int minusOne(){
    int n=0x01; 
    n=~n; 
    n++; 
    return n;
}

int bitNor(int x, int y) {
    return ~x & ~y;
}

int getByte(int x,int n) {
    int byte = (x>>(n << 3))&0xFF;
    return byte;
}

int isNotEqual(int x, int y){
    int aux= x^y;
    return !!aux;
}

int negate(int x) {
    x=~x;
    return x+1;
}

int isPositive(int x) {
    x=x>>31;
    return !x;
}

int test(int x, int y){
    return (((x^y)>>31) & (x>>31)+1) | ((~((x^y)>>31)) & ((x+(~(y)+1))>>31)+1) & (~(!!(x^y))+1);
}

int reverseBytes(int x) {
  int byte1 = x & 0xFF;
  int byte2 = (x >> 8) & 0xFF;
  int byte3 = (x >> 16) & 0xFF;
  int byte4 = (x >> 24) & 0xFF;
  return (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;
}

int isPower2(int x) {
    return !((x & (x + (~0))) | (!x));
}


//  PRUEBA DE FUNCIONES

int main(){
    printf("PROBAR FUNCIONES");
    return 0;
}