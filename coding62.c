#include <stdio.h>

int soNT(int a){
    for(int i=2;i<a;i++){
        if( (a%i) == 0){
            return 0;
            break;
        }
    }
    return 1;
}

void main(){
    int n;
    printf("Nhap vao 1 so bat ky ! \n");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(soNT(i)){
            printf("- %d \n",i);
        }
    }
}