#include <stdio.h>

void main(){
    float a; float b; float c; float d; float max;
    printf("Nhap vao a ");
    scanf("%f",&a);
    printf("Nhap vao b ");
    scanf("%f",&b);
    printf("Nhap vao c ");
    scanf("%f",&c);
    printf("Nhap vao d ");
    scanf("%f",&d);

    max=a;

    if(max < b ){
        max = b;
    }
    if(max <c ){
        max = c;
    }
    if(max < d){
        max = d;
    }

    printf("So lon nhat la : %f",max);
}