#include <stdio.h>

struct thietBi{
    int id;
    char name[30];
    int year;
    int status;
};

void main(){
    int n;
    printf("Nhap vao so luong thiet bi");
    scanf("%d",&n);

    struct thietBi thietBi[n];
    int flag_status = 0 ;
    int flag_search = 0;
    int id;
    


    for(int i=0;i<n;i++){
        printf("Nhap vao ma thiet bi thu %d \n",i);
        scanf("%d",&(thietBi[i].id));

        printf("Nhap vao ten thiet bi \n");
        fflush(stdin);
        gets(thietBi[i].name);

        printf("Nhap vao nam san xuat \n");
        scanf("%d",&(thietBi[i].year));

        printf("Nhap vao trang thai thiet bi 1:Tot 0:Hu \n");
        scanf("%d",&(thietBi[i].status));

    }


    for(int i=0;i<n;i++){
        if(!(thietBi[i].status)){
            puts(thietBi[i].name);
            printf("Bi hu \n");
            flag_status = 1;
        }
    }

    if(!flag_status){
        printf("Khong co thiet bi nao bi hu ! \n");
    }

    printf("Danh sach thiet bi duoc san xuat tu 2015 tro ve truoc");
    for(int i=0;i<n;i++){
        if(thietBi[i].year < 2015){
            puts(thietBi[i].name);
        }
    }

    printf("Ban co muon su dung chuc nang tim kiem khong ? Co:1, Khong:0 \n");
    scanf("%d",&flag_search);
    if(flag_search){

        printf("Nhap vao id can tim ! \n");
        scanf("%d",&id);

        for(int i=0;i<n;i++){
            if(thietBi[i].id == id){
                puts(thietBi[i].name);
            }
        }
    }
    
}