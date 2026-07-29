#include<stdio.h>
main(){
    int a[2][2], b[2][2], c[2][2];
    int i, j;
    printf("\n Enter value of first matrix");
  for(i=0; i<2; i++){
   for(j=0; j<2; j++){
   printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter value of second matrix");
  for(i=0; i<2; i++){
   for(j=0; j<2; j++){
            printf("Enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
     printf("\n Addition of two matrix\n");
  for(i=0; i<2; i++){
   for(j=0; j<2; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0; i<2; i++){
   for(j=0; j<2; j++){
   	printf("\n Enter c[%d][%d]=[%d]",i,j,c[i][j]);
  
}
printf("\n");
}
}


