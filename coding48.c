#include <stdio.h>

void main(){
    int a[10];
    for(int i=0;i<10;i++){
        printf("Nhap vao hoa don thu %d \n",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if( ((i==0) || (i==1) || (i==2)) &&( a[i] >500000) ){
            printf("So tien hoa don khach thu %d la %f \n",i,((float)a[i]*0.9));
        }else{
            printf("So tien hoa don khach thu %d la %d \n",i,a[i]);
        }
    }
}