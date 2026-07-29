#include<stdio.h>

main(){

	int a,b,c,largest,smallest;

	printf("\n Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);

	// Largest number using if-else
	if(a>b && a>c){
		largest = a;
	}
	else if(b>a && b>c){
		largest = b;
	}
	else{
		largest = c;
	}

	// Smallest number using if-else
	if(a<b && a<c){
		smallest = a;
	}
	else if(b<a && b<c){
		smallest = b;
	}
	else{
		smallest = c;
	}

	printf("\n Largest number = %d",largest);
	printf("\n Smallest number = %d",smallest);

	// Using switch-case
	switch(largest){

		case 1:
			printf("\n");
			break;

		default:
			printf("\n Switch-case cannot directly compare numbers.");
	}
}
