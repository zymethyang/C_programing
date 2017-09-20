#include <stdio.h>
#include <math.h>
void main(){
    float a;
    float b;
    float c;
    float delta;
    float x1; float x2;
    printf("Nhap vao a");
    scanf("%f",&a);
    printf("Nhap vao b");
    scanf("%f",&b);
    printf("Nhap vao c");
    scanf("%f",&c);
    if(a!=0){
        delta=b*b-4*a*c;
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("Nghiem la %f",x1);
        printf("Nghiem la %f",x2);
    }else{
        printf("Khong phai la phuong trinh bac 2");
    }   
}