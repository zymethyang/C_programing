/***
Viết chương trình thực hiện các công việc sau:
    - Nhập vào điểm kết thúc 1 môn học của 1 lớp học gồm 7 sinh viên.
    - In ra điểm của các sinh viên rớt môn học. Nếu tất cả các sinh viên đều đậu thì in ra thông báo.
    - In ra điểm của sinh viên cao điểm nhất.
***/

#include <math.h>
#include <stdio.h>
#include <conio.h>


int main(){
    float A[6];
    int i, dem=0;
    float imax;
    printf("Nhap vao diem ket thuc mon hoc cua cac sinh vien: \n");
    for(i=0; i<7; i++){
        printf("Mon %d :\n",i);
        scanf("%f", &A[i]);
    }
    for(i=0; i<7; i++){
        if(A[i]<5)
            dem++;
    }
    if(dem==0)
        printf("\nKhong co sinh vien nao rot mon");
    if(dem!=0)
            printf("\nDiem cua cac sinh vien rot mon hoc: ");
    imax=A[0];
    for(i=0; i<7; i++){
        if(A[i]<5)
            printf("%0.1f\t\t", A[i]);
        if(A[i]>imax)
            imax=A[i];
    }
    printf("\nDiem cua sinh vien cao diem nhat: %0.1f", imax);
    getch();
    return 0;
}