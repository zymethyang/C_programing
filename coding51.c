#include <stdio.h>
#include <limits.h>

void main(){
    int a[15]; int check=0;int *mang;int max;int index;int temp;
    for(int i=0;i<15;i++){
        printf("Nhap vao phan tu thu %d \n",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<15;i++){
        if( (a[i]%2)==1){
            check=1;
        }
    }
    if(check==1){
        printf("Mang co so le : ");
    }else{
        mang=&a[0];
        for(int i=0;i<15;i++){
            max=0;
            for(int j=i;i<15;j++){
                if( *(mang+i)>max){
                    index=j;
                }
            }
            temp=*(mang+i);
            *(mang+i)=*(mang+index);
            *(mang+index)=temp;
        }
    }
    for(int i=0;i<15;i++){
        printf("%d ",*(mang+i));
    }
}