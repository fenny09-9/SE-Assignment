#include<stdio.h>
 
// Recursive function
int recfact(int n){

	if(n==0 || n==1){
		return 1;
	}

	return n * recfact(n-1);
}

main(){

	int num,i,fact=1;

	printf("\n Enter number");
	scanf("%d",&num);

	// Iterative factorial
	for(i=1;i<=num;i++){
		fact = fact * i;
	
	}

	printf("\n Factorial using Iterative = %d",fact);

	// Recursive factorial
	printf("\n Factorial using Recursive = %d",recfact(num));

}
