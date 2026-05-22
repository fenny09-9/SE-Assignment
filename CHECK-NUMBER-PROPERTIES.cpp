#include<stdio.h>

main(){

	int num;

	printf("\n Enter number");
	scanf("%d",&num);

	// Even or Odd
	if(num%2==0){
		printf("\n Number is Even");
	}
	else{
		printf("\n Number is Odd");
	}

	// Positive, Negative or Zero
	if(num>0){
		printf("\n Number is Positive");
	}
	else if(num<0){
		printf("\n Number is Negative");
	}
	else{
		printf("\n Number is Zero");
	}

	// Multiple of 3 and 5
	if(num%3==0 && num%5==0){
		printf("\n Number is multiple of both 3 and 5");
	}
	else{
		printf("\n Number is not multiple of both 3 and 5");
	}
}
