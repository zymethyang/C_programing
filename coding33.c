#include <stdio.h>
#include <stdlib.h>

void main(){

    int i, a; int n=10;
    int  *mang;


    mang = (int*) malloc(n* sizeof(int)); 
    for ( i = 0; i < n; i++); 
    {    
        printf(" Nhap phan tu thu %d:", i); 
        scanf("%d", (mang+i)); 
    } 
    


    

}