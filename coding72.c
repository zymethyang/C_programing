#include <stdio.h>

struct khachHang{
    char name[30];
    int phone;
    int score;
};

void main(){

    struct khachHang khachHang[10];
    
    for(int i=0;i<10;i++){
        printf("Nhap vao ten khach hang thu %d \n",i);
        fflush(stdin);
        gets(khachHang[i].name);
        

        printf("Nhap vao so dien thoai khach hang thu %d \n",i);
        scanf("%d",&(khachHang[i].phone));

        printf("Nhap vao diem tich luy cua khach hang thu %d \n",i);
        scanf("%d",&(khachHang[i].score));
    }


    for(int i=0;i<10;i++){
        if( (khachHang[i].score >= 500) && (khachHang[i].score <= 700) ){
            puts(khachHang[i].name);
            printf("Duoc tang Iphone 7");
        }
        if( (khachHang[i].score >=751) && (khachHang[i].score <= 1000 ) ){
            puts(khachHang[i].name);
            printf("Duoc tang Iphone 7 Plus");
        }
        if( khachHang[i].score >1000 ){
            puts(khachHang[i].name);
            printf("Duoc tang Iphone 8");
        } 
    }
}