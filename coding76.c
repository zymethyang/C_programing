#include <stdio.h>

struct thietBi{
    int id;
    char name[30];
    int status;
    int timeOff;
    int timeOn;
};

void main(){
    int nControl;

    struct thietBi thietBi[15];
    for(int i=0;i<15;i++){
        printf("Nhap vao thiet bi thu %d",i);

        printf("Nhap vao id thiet bi");
        scanf("%d",&thietBi[i].id);

        printf("Nhap vao ten thiet bi");
        gets(thietBi[0].name);
    }

    printf("Nhap vao so luong thiet bi can dieu khien");
    scanf("%d",nControl);
    int id[nControl];

    for(int i=0;i<nControl;i++){
        printf("Nhap vao ma thiet bi");
        scanf("%d",&id[i]);
        for(int j=0;j<15;j++){
            if(id[i] == thietBi[j].id){
                printf("Nhap vao trang thai thiet bi");
                scanf("%d",thietBi[j].status);
            }else{
                printf("Thiet bi khong ton tai");
            }
        }
    }


    
}