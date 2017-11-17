#include <stdio.h>

int check(int a[]){
    int flag=0;
    for(int i=0;i<14;i++){
        if(a[i]>a[i+1]){
            flag=1;
            break;
        }
    }
    if(flag){
        return 0;
    }else{
        return 1;
    }
}

void main(){
    int mang[15];

    for(int i=0;i<15;i++){
        printf("Nhap vao phan tu thu %d \n",i);
        scanf("%d",&mang[i]);
    }

    if(check(mang)){
        printf("Mang da sap xep theo thu tu tang dan ! \n");
        printf("Phan tu lon thu nhi trong mang la %d",mang[13]);
    }else{
        printf("Mang chua sap xep theo thu tu tang dan! \n");
    }
 
}