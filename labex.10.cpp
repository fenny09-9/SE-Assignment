#include<stdio.h>

main(){

	int num;
	int *ptr;

	printf("\n Enter number");
	scanf("%d",&num);

	ptr = &num;

	printf("\n Original value = %d",num);

	*ptr = *ptr + 10;

	printf("\n Modified value(+10) = %d",num);
}
