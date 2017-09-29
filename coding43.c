#include <stdio.h>
#include <limits.h>

void main (){
    int a[10];int swap;int max;int index;int ktra_so_le=0;int so_le;
    for(int i=0;i<10;i++){
        printf("Nhap vao phan tu thu %d \n",i);
        scanf("%d",&a[i]);
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
    for(int i=0;i<10;i++){
        printf("Phan tu thu %d la : %d \n",i,a[i]);
    }
    for(int i=0;i<10;i++){
        if((a[i]%2)==1 || (a[i]%2)==(-1)){
            so_le=a[i];
            ktra_so_le=1;
            break;
        }
    }
    if(ktra_so_le){
        printf("So le can tim la : %d \n",so_le);
    }else{
        printf("Khong co so le! ");
    }
}
