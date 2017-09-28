#include <stdio.h>
void main(){
    int a;int b;
    printf("Nhap vao so a : \n");
    scanf("%d",&a);
    printf("Nhap vao so b : \n");
    scanf("%d",&b);
    if(a>b){
        for(int i=a;i>b;i--){
            if((i%5)==0){
                printf("So can tim la %d",i);
                break;
            }
        }
    }else{
        for(int i=b;i>a;i--){
            if((i%5)==0){
                printf("So can tim la %d",i);
                break;
            }
        }
    }
}