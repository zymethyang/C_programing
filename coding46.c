#include <stdio.h>
#include <limits.h>

void main (){
    int a[10];int swap;int max;int index;int ktra_so_le=0;int so_le;int temp;

    for(int i=0;i<10;i++){
        int trung;
        do{
            trung=0;
            printf("Nhap vao phan tu thu %d \n",i);
            scanf("%d",&temp);
            for(int j=0;j<i;j++){
                if(temp==a[j]){
                    trung=1;
                }
            }
            if(trung!=1){
                a[i]=temp;
            }
        }
        while(trung==1);
    }
    
    for(int i=0;i<10;i++){
        max=INT_MIN;
        for(int j=i;j<10;j++){
          if(a[j]>max){
            max=a[j];
            index=j;
          }
        }
        swap=a[i];
        a[i]=a[index];
        a[index]=swap;
    }
    printf("So lon NHAT trong mang la : %d \n",a[0]);
}
