#include <stdio.h>
#include <stdint.h>
//FUNCION
int reverseBytes(int x) {
  	while(x<=0x10000000){
  		x=(x<<4);
	  }
	int rever=0x0;
	for(int i=0;i<32;i=i+4){
		int bit=(x>>i)&0xf;
		rever=(rever<<4)|bit;
	}
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
