#include <stdio.h>
#include <math.h>
void main(){
    int a;int n;int price;
    int continues = 1;
    while(continues == 1){
        printf("Nhap vao ma san pham : ");
        scanf("%d",&a);
        printf("Nhap vao so luong san pham : ");
        scanf("%d",&n);
        switch(a) {
            case 001  :
                  if(n<=10){
                      price = 15000*n;
                  }else{
                      price = 15000*n*0.9;
                    }
                  break;
                
            case 002  :
                if(n<=10){
                    price = 20000*n;
                }else{
                    price = 20000*n*0.93;
                }
                 break;

            case 003 : 
            if(n<=10){
                price = 30000*n;
            }else{
                price = 30000*n*0.95;
            };
            break;
        }
        printf("Gia la %d",price);
        printf("Nhap 0 de dung mua ",&continues);
    }
}