#include <stdio.h>
#include <limits.h>

void main (){
    int a[10];int swap;int max;int index;int temp;int hop_le;

    for(int i=0;i<10;i++){
        int hop_le;
        do{
            hop_le=0;
            printf("Nhap vao diem sv thu %d \n",i);
            scanf("%d",&temp);
            if(temp <0 ){
                hop_le=1;
                printf("Nhap vao diem > 0 ! \n");
            }
            else if(temp >10){
                hop_le=1;
                printf("Nhap vao diem >10 ! \n");
            }else{
                hop_le=0;
                a[i]=temp;
            }
        }
        while(hop_le==1);
    }
}
