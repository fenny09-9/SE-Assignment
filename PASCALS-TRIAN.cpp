#include<stdio.h>

// Recursive Function
int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}

main(){
	int i,j,n,value;

	printf("\n Enter Number of Rows");
	scanf("%d",&n);

	printf("\n Pascal Triangle : \n\n");

	for(i=0;i<n;i++){

		for(j=0;j<=i;j++){

			value = fact(i) / (fact(j) * fact(i-j));

			printf(" * ");
		}

		printf("\n");
	}
}
