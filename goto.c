#include<stdio.h>
main(){
	int num;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	if(num%2==0){
		goto Even;
	}
	else{
		goto Odd;
	}
	Even:{
	printf("\n Even num");
	return;
	}
	Odd:{
	printf("\n Odd num");
	return;
	}
}
