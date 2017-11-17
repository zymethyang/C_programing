#include <stdio.h>
#include <math.h>
int getWords(char *base, char target[10][20])
{
	int n=0,i,j=0;
	
	for(i=0;1;i++)
	{
		if(base[i]!=' '){
			target[n][j++]=base[i];
		}
		else{
			target[n][j++]='\0';//insert NULL
			n++;
			j=0;
		}
		if(base[i]=='\0')
		    break;
	}
	return n;
	
}

int main(){
    char hoten[10][50];
    float diem[10][3];
    int i, j, flag = 0;
    for(i= 0; i<5; i++){
        printf("Ho va ten: ");
        gets(hoten[i]);
        printf("Nhap diem: ");
        for(j=0; j<2; j++){
            scanf("%f", &diem[i][j]);
        }
        diem[i][2] = (diem[i][0] + diem[i][1])/2;
        if(diem[i][2]<0)    flag=1;
    }
    for(i=0;i<5;i++){
      printf("%d",sizeof(hoten[i]));
    }
    if(flag==1){
        printf("\nDanh sach sinh vien rot:  \n");
        for(i=0; i<5; i++){
            if(diem[i][2] < 5){
                printf("Ho va  ten:   ");
                puts(hoten[i]);
                printf("Diem: ");
                for(j=0; j<3; j++){
                    printf("%0.2f\t", diem[i][j]);
                }
                printf("\n");
                flag = 1;
            }
        }
    }
    else    printf("\nKhong co sinh vien nao rot");
    float imax = diem[0][2];
    for(i=1; i<5; i++)
            if(imax < diem[i][2])
                imax = diem[i][2];
    printf("\nSinh vien co diem cao nhat la:\n");
    for(i=0; i<5; i++)
        for(j=0; j<3; j++){
            if(imax == diem[i][2]){
                printf("Ho va  ten:   ");
                puts(hoten[i]);
                printf("Diem: ");
                for(j=0; j<3; j++){
                    printf("%0.2f\t", diem[i][j]);
                }
                 printf("\n");
            }
        }
    return 0;

    int n[50]; 
    int k;
    for(i=0;i<5;i++){
      char str[] = hoten[i];
      char arr[i][10][50];
      n[i]=getWords(str,arr);
    }

    
      
     
    
    for(k=0;k<5;k++){
      for(i=0;i<=n[k];i++){
        printf("%d",arr[k][i]);
    }
    }
    
}