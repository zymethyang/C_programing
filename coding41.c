#include <stdio.h>
void main(){
    int temp[3][5];int max; int min;int max_all;int min_all;float avg_temp;

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("Du lieu nhiet do ngay thu %d , lan thu %d \n",(i+1),(j+1));
            scanf("%d",&temp[i][j]);
        }
    }

    avg_temp=0;
    max_all=temp[0][0];
    min_all=temp[0][0];
    for(int i=0;i<3;i++){
        max=temp[i][0];
        min=temp[i][0];
        for(int j=0;j<5;j++){
            if(max<temp[i][j]){
                max=temp[i][j];
            }
            if(min>temp[i][j]){
                min=temp[i][j];
            }
            avg_temp=avg_temp + (float)temp[i][j];
        }
        avg_temp=avg_temp/5;
        if(max_all<max){max_all=max;}
        if(min_all>min){min_all=min;}
        printf("Nhiet do trung binh cua ngay thu %f la %f \n",i+1,avg_temp);
        printf("Max cua ngay thu %d la : %d \n",i+1,max);
        printf("Min cua ngay thu %d la : %d \n",i+1,min);
    }
    printf("Max la : %d \n",max_all);
    printf("Min la : %d \n",min_all);
    

}