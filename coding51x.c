#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void main(){
    int a[15]; int check=0;int *mang;int max;int index;int temp;
    for(int i=0;i<15;i++){
        printf("Nhap vao phan tu thu %d \n",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<15;i++){
        if( ( (a[i]%2)==1 ) || ((a[i]%2)==-1) ){
            check=1;
        }
    }
    if(!check){
        printf("Mang khong co so le : ");
    }else{
        mang = (int *) calloc (1,sizeof(int));
       //mang=&a[0];
        int i_length=0;
        int i=0;
        while(i<15){
            if(a[i]%2){
                *(mang+i_length)=a[i];
                i_length++;
            }
            i++;
        }
        for(int i=0;i<i_length;i++){
            max=INT_MIN;
            for(int j=i;j<i_length;j++){
                if(*(mang+j)>max){
                   max=*(mang+j);
                   index=j;
                }
            }
            temp=*(mang+index);
            *(mang+index)=*(mang+i);
            *(mang+i)=temp;
        }
        printf("\nMang sap xep la : \n");
        for(int i=0;i<i_length;i++){
            printf("%d ",*(mang+i));
        }
        printf("\nMang goc la : \n");
        for(int i=0;i<15;i++){
            printf("%d ",a[i]);
        }
        free (mang); 
    }
}