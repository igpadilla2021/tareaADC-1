#include <stdio.h>
//FUNCION
int reverseBytes(int x) {
  int byte1 = x & 0xFF;
  int byte2 = (x >> 8) & 0xFF;
  int byte3 = (x >> 16) & 0xFF;
  int byte4 = (x >> 24) & 0xFF;
  return (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;
}


// TESTEO
int main(){
int p=0x01020304;
printf("%x \n",reverseBytes(p)); 
printf("%x \n",p); 
p=0x01234;
printf("%x \n",reverseBytes(p)); 
printf("%x \n",p); 
p=0x040A04E;
printf("%x \n",reverseBytes(p)); 
printf("%x \n",p); 
return 0;
}
