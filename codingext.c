#include <stdio.h>
#include <stdlib.h>

int soLonHon(int a,int b){
    if (b > a){
        return 1;
    }else{
        return 0;
    }
}

int ktraLap(int* a,int s,int index){
    int flag=0;
    for(int i=0;i<index;i++){
        if(s == *(a+i)){
            flag=1;
            break;
        } 
    }
    return flag;
}   

int demSoTrongMang(int* a,int n,int s){
    int dem=0;
    for(int i=0;i<n;i++){
        if(s == *(a+i)){
            dem++;
        }
    }
    return dem;
}

void dayTangDan(int* a,int n){
    for(int i=0;i<n;i++){
        if(i==0){
            if(soLonHon(*a,*(a+1))){
                printf("Day tang dan : %d \n",*a);
            }
        }else{
            if( soLonHon(*(a-1),*(a)) == 1  ){
                printf("%d ",*a);
            }
        } 
    }
}

void nhapMang(int* z,int n){
    for(int i=0;i<n;i++){
        printf("Nhap vao phan tu thu %d \n",i);
        scanf("%d",&*(z+i));
    }
}

void main(){
    int *a;
    int *b;
    int n;
    int m;
    a = (int *)malloc(n*sizeof(int));
    b = (int *)malloc(n*sizeof(int));
    printf("Nhap vao so phan tu cua day \n");
    scanf("%d",&n);
    nhapMang(a,n);
    
    for(int i=0;i<n;i++){
        if(!ktraLap(a,*(a+i),i)){
            printf("%d co so lan xuat hien la : %d \n",*(a+i),demSoTrongMang(a,n,*(a+i)));
        }
    }

    printf("Nhap vao so luong phan tu mang B \n");
    scanf("%d",&m);
    nhapMang(b,m);

    for(int i=0;i<m;i++){
        if(demSoTrongMang(a,n,*(b+i))!=0){
            printf("So %d xuat hien dong thoi \n",(*(b+i)));
        }
    }

    dayTangDan(a,n);

    free(a);
    free(b);
}