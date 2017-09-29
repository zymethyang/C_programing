#include <stdio.h>

void main(){
    float diem[7];int count=0;float check[7];float max=0;
    for(int i=0; i<7 ;i++){
        printf("Nhap vao diem sinh vien thu %d \n",i+1);
        scanf("%f",&diem[i]);
    }

    for(int i=0;i<7;i++){
        if(diem[i]<5){ 
            check[i]=diem[i];
            count++;
        }
        if(max<diem[i]){
            max=diem[i];
        }
    }
    if(!count){
        printf("Khong co sinh vien nao rot mon \n");
    }else{
        printf("Diem rot mon la : \n");
        for(int i=0;i<7;i++){
            if(check[i]!=0){
                printf("%f \n",check[i]);
            }
        }
    }
    printf("Max la %f",max);
}