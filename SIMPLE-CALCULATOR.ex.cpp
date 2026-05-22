#include<stdio.h>

main(){

	int a,b;
	char op;

	printf("\n Enter two numbers");
	scanf("%d%d",&a,&b);

	printf("\n Enter operator (+,-,*,/,%%)");
	scanf(" %c",&op);

	if(op=='+'){
		printf("\n Addition = %d",a+b);
	}

	else if(op=='-'){
		printf("\n Subtraction = %d",a-b);
	}

	else if(op=='*'){
		printf("\n Multiplication = %d",a*b);
	}

	else if(op=='/'){
		printf("\n Division = %d",a/b);
	}

	else if(op=='%'){
		printf("\n Modulus = %d",a%b);
	}

	else{
		printf("\n Invalid Operator");
	}
}
