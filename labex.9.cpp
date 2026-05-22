#include<stdio.h>

main(){

	int a[5],i;
	int b[3][3],j,sum=0;

	printf("\n Enter 5 numbers");

	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}

	printf("\n Array elements are:");

	for(i=0;i<5;i++){
		printf("\n %d",a[i]);
	}

	printf("\n Enter 3x3 matrix");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n Matrix is:");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
			sum = sum + b[i][j];
		}
		printf("\n");
	}

	printf("\n Sum = %d",sum);
}
