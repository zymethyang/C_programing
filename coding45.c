#include <stdio.h>
#include <limits.h>

void main (){
    int a[10];int swap;int max;int index;int ktra_so_le=0;int so_le;

    for(int i=0;i<10;i++){
        do{
            printf("Nhap vao phan tu thu %d \n",i);
            scanf("%d",&a[i]);
        }
        while(a[i]<0);
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
    printf("So lon thu nhi trong mang la : %d \n",a[1]);
}
