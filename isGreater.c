# include <stdio.h>

int test(int x, int y){
    return (((x^y)>>31) & (x>>31)+1) | ((~((x^y)>>31)) & ((x+(~(y)+1))>>31)+1) & (~(!!(x^y))+1);
}

//TESTEO
int main(){
    printf("casos mayores tipicos \n");
    printf("%d \n", test(2,1));
    printf("%d \n", test(2,-1));
    printf("%d \n", test(-1,-2));
    printf("%d \n", test(1,-2));

    printf("casos con inversos \n");
    printf("%d \n", test(-1,1));
    printf("%d \n", test(1,-1));

    printf("casos extremos menores\n");
    printf("%d \n", test(-2147483648,2));
    printf("%d \n", test(-2147483648,-2));
    printf("%d \n", test(-2147483648,2147483647));
    printf("%d \n", test(2, 2147483647));

    printf("casos iguales\n");
    printf("%d \n", test(0,0));

    printf("casos extremos mayores\n");
    printf("%d \n", test(2,-2147483648));
    printf("%d \n", test(-2,-2147483648));
    printf("%d \n", test(2147483647,-2147483648));
    printf("%d \n", test(2147483647, 2));
    
    printf("casos menores tipicos \n");
    printf("%d \n", test(-2,1));
    printf("%d \n", test(-2,-1));
    printf("%d \n", test(1,2));
    printf("%d \n", test(-1,2));
    return 0;
}