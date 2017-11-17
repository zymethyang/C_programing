#include <stdio.h>
#include <stdlib.h>
int check(int a){
    if( (a>5) && (a<10) ){
        return 1;
    }else{
        return 0;
    } 
}
void main(){
    int flag=0;
    float diem[15];
    for(int i=0;i<15;i++){
        printf("Nhap vao diem sinh vien thu %d \n",i);
        scanf("%f",&diem[i]);
    }
    for(int i=0;i<15;i++){
        if(!check(diem[i])){
            flag++;
        }
    }
    if(flag==15){
        printf("Tat ca rot !");
    }else{
        for(int i=0;i<15;i++){
            if(check(diem[i])){
                printf("%f \n",diem[i]);
            }
        } 
    }
}