//to check voting eligibity
/*
if(condition){
//block
}else{
//block
}
*/
#include<stdio.h>
main(){
	int age;
	printf("\n Enter your age:");
	scanf("%d",&age);
	if(age > 18){
		printf("\n Eligible for voting");
		}
		else{
			printf("\n Not eligible for voting");
		}
}

