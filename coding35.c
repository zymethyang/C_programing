#include <stdio.h>

void main(){
    float ma_xe; int so_km; int thanh_toan;
    printf("Nhap vao ma xe \n");
    scanf("%f",&ma_xe);

    while(so_km>=0){

        printf("Nhap va so km da di \n");
        scanf("%d",&so_km);
        if(so_km <0){ break;}
        switch ((int)ma_xe){
            case 1: 
            if(so_km <= 1){
                thanh_toan=11000;
            }
            else if((so_km > 1) && (so_km <= 30)){
                thanh_toan=15500*so_km;
            }
            else{
                thanh_toan=13600*so_km;
            }
        break;
    
        case 2: 
            if(so_km <= 1){
                thanh_toan=12000;
            }
            else if((so_km > 1) && (so_km <= 30)){
                thanh_toan=16500*so_km;
            }
            else{
                thanh_toan=14600*so_km;
            }
        break;
    
        case 3: 
            if(so_km <= 1){
                thanh_toan=11000;
            }
            else if((so_km > 1) && (so_km <= 30)){
                thanh_toan=14500*so_km;
           }
            else{
                thanh_toan=11600*so_km;
            }
        break;
        }
        
        printf("Gia tien taxi la: %d \n",thanh_toan);
    }
}