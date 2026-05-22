#include<stdio.h>

int palindrome(int n){

	int rem,rev=0,orNum;

	orNum = n;

	while(n!=0){
		rem = n%10;
		rev = rev*10 + rem;
    	n = n/10;
	}

	if(orNum==rev){
		return 1;
	}
	else{
		return 0;
	}
}

main(){

	int num;

	printf("\n Enter number");
	scanf("%d",&num);

	if(palindrome(num)==1){
		printf("\n Number is Palindrome");
	}
	else{
		printf("\n Number is not Palindrome");
	}

	printf("\n String palindrome can also be checked by comparing characters from both ends.");
}
