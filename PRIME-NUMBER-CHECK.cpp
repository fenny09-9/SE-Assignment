#include<stdio.h>

main(){

	int num,i,count=0,n,j;

	printf("\n Enter number");
	scanf("%d",&num);

	// Check prime number
	for(i=1;i<=num;i++){

		if(num%i==0){
			count++;
		}
	}

	if(count==2){
		printf("\n Number is Prime");
	}
	else{
		printf("\n Number is not Prime");
	}

	// Print prime numbers from 1 to given number
	printf("\n Prime numbers are:\n");

	for(i=1;i<=num;i++){

		count=0;

		for(j=1;j<=i;j++){

			if(i%j==0){
				count++;
			}
		}

		if(count==2){
			printf("%d ",i);
		}
	}
}
