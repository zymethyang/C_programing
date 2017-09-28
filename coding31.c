#include <stdio.h>
void main(){
    int nhiet_do;
    int a[10];int min;int max;float avg;

    for(int i=1;i<=10;i++){
        printf("Nhap vao nhiet do ngay thu %d \n",i);
        scanf("%d",&a[i]);
    }
    min=a[1];
    for(int i=2;i<=10;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Min la : %d \n",min);
    max=a[1];
    for(int i=2;i<=10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Max la : %d \n",max);

    for(int i=1;i<=10;i++){
        avg+=a[i];
    }
    avg/=10;
    printf("Avg la : %f \n",avg);
}