#include<stdio.h>

int fibo(int n){

	if(n==0 || n==1){
		return n;
	}

	return fibo(n-1) + fibo(n-2);
}

main(){

	int n,i;

	printf("\n Enter number");
	scanf("%d",&n);

	printf("\n Fibonacci Series:\n");

	for(i=0;i<n;i++){
		printf("%d ",fibo(i));
	}

	printf("\n Nth Fibonacci Number = %d",fibo(n));

	printf("\n Iterative method is faster than recursive method.");
}
