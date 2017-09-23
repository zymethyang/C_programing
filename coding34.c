#include <stdio.h>

void main(){
    int password;int count=0;

    while(password != 12345){
        printf("Nhap vao password \n");
        scanf("%d",&password);
        if(password == 12345){
            printf("Password Dung");
        }else{
            count++;
        }
        if(count==3){
            printf("Tai khoan bi khoa");
            break;
        }
    }
}