#include <stdio.h>
void main(){
    int a = 0xb7;
    printf("%x \n",a);
    int b = 0x5e;
    printf("%x \n",b);
    int x = a | b;
    printf("%x \n",x);
    b = ~a;
    printf("%x \n",b);
    int y=a^b;
    printf("%x \n",y);
    int z=x&y;
    printf("%x \n",z);
    for(int i=0;i<3;i=i+2){
        b++;
        printf("%x \n",b);
        a= (a<<2) | 0x33;
        printf("%x \n",a);
    } 
}