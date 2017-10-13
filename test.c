#include <stdio.h>

void main(){
   int mang[2]; int *con_tro;int swap;
   mang[0]=1;mang[1]=2;
   con_tro=&mang[0];

   swap=*con_tro;
   *(con_tro)=*(con_tro+1);
   *(con_tro+1)=swap;

   printf("%d \n",*con_tro);
   printf("%d \n",*(con_tro+1));

   
   printf("%d \n",mang[0]);
   printf("%d \n",mang[1]);

}