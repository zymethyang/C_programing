#include <stdio.h>
void main(){
    int A = 0xB7;
    printf("A = %b \n",A);
    int B = 0x5C;
    printf("B = %X \n",B);
    int X = A | B;
    printf("X = %X \n",X);
    B = ~A;
    printf("B = %X \n",B);
    int Y = A^B;
    printf("Y = %X \n",Y);
    int Z = X & Y;
    printf("Z = %X \n",Z);

    for(int I=0; I<3; I=I+2){
        B++;
        printf("B = %X \n",B);
        A = (A<<2) | 0x32;
        printf("A = %X \n",A);
    printf("Ket thuc vong lap voi i = %d \n",I);
    }

    A = 0xD8;
    printf("A = %X \n",A);
    B = 0x6A;
    printf("B = %X \n",B);
    X = A^B;
    printf("X = %X \n",X);
    A = ~A;
    printf("A = %X \n",A);
    Y = X & A;
    printf("Y = %X \n",Y);
    Z = B | Y;
    printf("Z = %X \n",B);
    while(B < 0x6E){
    B++;
    printf("B = %X \n",B);    
    Z = (A>>2) + 0x03;
    printf("Z = %X \n",Z);
    }
    
}
