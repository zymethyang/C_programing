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
    if(check==1){
        printf("Mang co so le : ");
    }else{
        mang = (int *) malloc (sizeof(int));
       //mang=&a[0];
        for(int i=0;i<15;i++){
            *(mang+i)=a[i];
        }
        for(int i=0;i<15;i++){
            max=INT_MIN;
            for(int j=i;j<15;j++){
                if(*(mang+j)>max){
                   max=*(mang+j);
                   index=j;
                }
            }
            temp=*(mang+index);
            *(mang+index)=*(mang+i);
            *(mang+i)=temp;
        }
        printf("Mang sap xep la : \n");
        for(int i=0;i<15;i++){
            printf("%d ",*(mang+i));
        }
        printf("Mang goc la : \n");
        for(int i=0;i<15;i++){
            printf("%d ",a[i]);
        }
        free (mang); 
    }
}