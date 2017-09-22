#include <stdio.h>



void main(){
    int ma_sp; int so_sp; int thanh_toan;
    printf("Nhap vao ma san pham ");
    scanf("%d",&ma_sp);
    printf("Nhap vao so luong ");
    scanf("%d",&so_sp);

    switch (ma_sp){
        case 1: 
        if(so_sp <= 10){
            thanh_toan=15000*so_sp;
        }
        else if(so_sp >10){
            thanh_toan=15000*0.9*so_sp;
        }
    break;

    case 2: 
        if(so_sp <= 10){
            thanh_toan=20000*so_sp;
        }
        else if(so_sp >10 ){
            thanh_toan=20000*so_sp*0.93;
        }
    break;

    case 3: 
        if(so_sp <= 10){
            thanh_toan=30000*so_sp;
        }
        else if(so_sp>10){
            thanh_toan=30000*so_sp*0.95;
        }
    break;
    }
    
    printf("Gia tien taxi la: %d",thanh_toan);
}