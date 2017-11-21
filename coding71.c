#include <stdio.h>
#include <conio.h>

struct sinhvien{
    char hoten[30];
    float diemtoan;
    float diemly;
    float diemhoa;
    float diemtb;
};

struct sinhvien loptt[5];

void main(void){
    int i;
    printf("Nhap du lieu cho danh sach sinh vien");
    for(i=0;i<5;i++){
        printf("Sinh vien thu : %d \n",i);
        puts("Ho ten : \n");
        gets(loptt[i].hoten);
        puts("Diem toan : \n");
        scanf("%f",&(loptt[i].diemtoan));
        //flushall();
        puts("Diem ly : \n");
        scanf("%f",&(loptt[i].diemly));
        //flushall();

        puts("Diem hoa: \n");
        scanf("%f",&(loptt[i].diemhoa));
        //flushall();
        loptt[i].diemtb = (loptt[i].diemtoan +loptt[i].diemhoa+loptt[i].diemtoan) / 3 ;
        printf("Diem trung binh cua cac sinh vien \n");
        for(int j=0;j<5;i++){
            puts("Ho ten : \n");
            puts(loptt[j].hoten);
            printf("Diem tb : %f \n",loptt[j].diemtb);
        }
    }
}