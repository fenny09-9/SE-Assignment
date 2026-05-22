#include<stdio.h>

main(){

	int num,i,n;

	printf("\n Enter number");
	scanf("%d",&num);

	printf("\n Enter range");
	scanf("%d",&n);

	printf("\n Multiplication Table:");

	for(i=1;i<=n;i++){

		printf("\n %d x %d = %d",num,i,num*i);
	}
}
