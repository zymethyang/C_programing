#include <stdio.h>
#include <stdlib.h>

 void main(){
     int *mang;
     int *mang2;
     int n;

     printf("Nhap vao so phan tu cua mang : \n");
     scanf("%d",&n);

     mang = (int *) calloc(1, sizeof(int));
     mang2 = (int *) calloc(1,sizeof(int));

     for(int i=0 ; i<n ; i++){
        printf("Nhap vao phan tu thu %d : \n",i);
        scanf("%d",&*(mang+i));
     }
    
     printf("Mang duoc luu vao o nho \n");
     for(int i=0 ; i<n ; i++){
        printf("%x \n",(mang+i));
     }
     
     int index=0;
     for(int i=0;i<n;i++){
        int check=0;
        for(int j=0;j<=index;j++){
            if(*(mang+i) == *(mang2+j)){
                check=1;
            }
        }
        if(!check){
            *(mang2+index)=*(mang+i);
            index++;
        }
     }

    printf("Mang moi la \n");
     for(int i=0;i<index;i++){
         printf("%d \n",*(mang2+i));
     }
 }