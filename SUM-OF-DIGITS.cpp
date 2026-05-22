#include<stdio.h>

main(){

	int num,rem,sum=0,rev=0;

	printf("\n Enter number");
	scanf("%d",&num);

	while(num!=0){

		rem = num%10;

		sum = sum + rem;

		rev = rev*10 + rem;

		num = num/10;
	}

	printf("\n Sum of digits = %d",sum);

	printf("\n Reverse number = %d",rev);
}
