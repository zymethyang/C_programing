#include <stdio.h>

void main(){
    float ma_sp=1; int so_sp; int thanh_toan;
    
   

    while(ma_sp!=0){
        if(ma_sp<0){
            ma_sp=1;
        }
        int thanh_toan=0;
        while(ma_sp>0){

            printf("Nhap vao ma san pham \n");
            scanf("%f",&ma_sp);

            if(ma_sp>0){
                printf("Nhap vao so luong \n");
                scanf("%d",&so_sp);
            }
            
           
                switch ((int)ma_sp){
                    case 1: 
                        if(so_sp <= 10){
                             thanh_toan+=15000*so_sp;
                        }
                        else if(so_sp >10){
                            thanh_toan+=15000*0.9*so_sp;
                        }
                break;
    
                    case 2: 
                        if(so_sp <= 10){
                            thanh_toan+=20000*so_sp;
                        }
                        else if(so_sp >10 ){
                            thanh_toan+=20000*so_sp*0.93;
                        }
                break;
    
                case 3: 
                    if(so_sp <= 10){
                        thanh_toan+=30000*so_sp;
                    }
                    else if(so_sp>10){
                        thanh_toan+=30000*so_sp*0.95;
                    }
                break;
                }
        
           
        
            }
        
        printf("Gia tien la: %d \n",thanh_toan);
        if(ma_sp==0){ break;}
    
    }
}