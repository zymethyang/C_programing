#include <stdio.h>

void main(){
    int a[100];int max;int min;int n=0;

    for(int i=0;i<=100;i++){
        printf("Nhap vao so thu : %d \n",i);
        scanf("%d",&a[i]);
        if(a[i]<0){
            break;
        }
        n++;
    }
    
    max=0;
    

    for(int i=0;i<=n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Max la : %d \n",max);
    printf("Min la : %d \n",min);
}