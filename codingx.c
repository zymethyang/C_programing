/***
Viết một chương trình xử lý các yêu cầu sau:
- Nhập vào một mảng thứ nhất gồm n số nguyên bất kỳ, với giá trị n nhập từ bàn
phím.
- Tạo một mảng thứ hai chứa dữ liệu là những số trong mảng thứ nhất không
trùng nhau. In ra mảng thử hai theo thứ tự giảm dần.
(Hướng dẫn: copy từng số không bị trùng nhau từ mảng 1 sang mảng 2. Mảng 2
ban đầu được cấp phát một ô nhớ, sau mỗi lần copy xong một số thì mảng 2 sẽ
được cấp phát thêm 1 ô nhớ nữa – dùng hàm realloc – cú pháp con trỏ = (kiểu dữ
liệu*) realloc(con trỏ, kích thước mới theo byte) ) 
***/

#include    <stdio.h>
#include    <conio.h>
#include    <malloc.h>

int main()
{
    int *a, *b;
    int n, i, j, flag = 0, dem =0;
    printf("Nhap n: ");
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    b = (int*)realloc(b,1*sizeof(int));
    printf("\nNhap du lieu cho mang:\n ");
    for(i=0; i<n; i++)
    {
        printf("Nhap vao diem cua sv thu %d: ", i+1);
        scanf("%d", &*(a+i));
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            flag = 0;
            if(*(a+i) == *(a+j))
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            *(b+dem) = *(a+i);
            dem++;
        }
        else;
    }
    for(i=0; i<dem-1; i++)
        for(j=i; j<dem; j++)
        {
            int tam;
            if(*(b+i) < *(b+j))
            {
                tam = *(b+i);
                *(b+i) = *(b+j);
                *(b+j) = tam;
            }
        }
    printf("\nMang sau khi sap xep giam dan: ");
    for(i=0; i<dem; i++)
        printf("%d\t", *(b+i));
    getch();
    return 0;
    free(a);
    free(b);
}