#include <stdio.h>
#include <stdlib.h>


void main(){
    int n;
    int *contro;
    contro = (int *) calloc(1, sizeof(int));

    printf("Nhap vao so luong sinh vien : \n");
    scanf("%d",&n);
    

    for(int i=0;i<n;i++){
        printf("Nhap vao diem sinh vien thu : %d \n",i);
        scanf("%d",&(*(contro+i)));
    }

    printf("Cac sinh vien dau la :\n");
    for(int i=0;i<n;i++){
        if(*(contro+i)>5){
            printf("%d \n",*(contro+i));
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(*(contro+i)>max) max=*(contro+i);

    }
    printf("Diem cao nhat la %d \n",max);

    int min=10;
    for(int i=0;i<n;i++){
        if(*(contro+i)<min)  min=*(contro+i);
    }
    printf("Diem thap nhat la %d \n",min);
    free(contro);
}