#include <stdio.h>
#include <stdint.h>
//FUNCION
int reverseBytes(int x) {
  int byt=x&0xf;
  int byt2=x&0xf0;
  int byt3=x&0xf00;
  int byt4=x&0xf000;
  int byt5=x&0xf0000;
  int byt6=x&0xf00000;
  int rever=x&0xf000000;
  rever=(rever>>24)|(byt6>>16)|(byt5>>8)|(byt4)|(byt3<<8)|(byt2<<16)|(byt<<24);
	return rever;
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
