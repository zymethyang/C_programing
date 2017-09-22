#include <stdio.h>



void main(){
    int a; int x; int y; int z;int t; int du_1 ; int du_2; int du_3;
    printf("Nhap vao so tien can rut ");
    scanf("%d",&a);
    printf("Nhap vao so luong to 500.000d ");
    scanf("%d",&x);
    printf("Nhap vao so luong to 200.000d ");
    scanf("%d",&y);
    printf("Nhap vao so luong to 100.000d ");
    scanf("%d",&z);
    printf("Nhap vao so luong to 50.000d ");
    scanf("%d",&t);

    if(a > (500000*x +200000*y+200000*z+50000*t)){
        printf("So tien trong ATM khong du ! ");
    }else{
        if((a/500000) >= x ){
            printf("Lay ra %d to 500000 \n",x);
            du_1 = a - 500000*x;
        }else{
            printf("Lay ra %d to 500000 \n",(a%500000));
            du_1 = a- 500000*(a%500000);
        }

        if((du_1/200000) >= y ){
            printf("Lay ra %d to 200000 \n",y);
            du_2 = du_1 - 200000*y;
        }else{
            printf("Lay ra %d to 200000 \n",(du_1/200000));
            du_2 = du_1- 200000*(du_1/200000);
        }

        if((du_2/100000) >= z ){
            printf("Lay ra %d to 100000 \n",z);
            du_3 = du_2 - 100000*z;
        }else{
            printf("Lay ra %d to 100000 \n",(du_2/100000));
            du_3 = du_2- 100000*(du_2/100000);
        }

        if((du_3/50000) >= t ){
            printf("Lay ra %d to 50000 \n",y);
        }else{
            printf("Lay ra %d to 50000 \n",(du_3/50000));
        }
    }
}