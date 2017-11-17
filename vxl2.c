#include <stdio.h>
void main(){
    int a=0xb8;
    printf("%x \n",a);
    int b=0x53;
    printf("%x \n",b);
    int x=a|b;
    printf("%x \n",x);
    a=~a;
    printf("%x \n",a);
    int y=x&a;
    printf("%x \n",y);
    int z=b|y;
    printf("%x \n",z);
    while(b<0x56){
        b++;
        printf("%x \n",b);
        z = (a>>2) + 0x03;
        printf("%x \n",z);
    }    
}