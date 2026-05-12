#include<stdio.h>
main(){
	int num,rem,rev=0;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	printf("\n original number=%d",num);
	while(num != 0){
		rem = num%10;
		//printf("\n rem=%d" ,rem);
		rev=rev*10+rem;
		//printf("\t rev=%d" ,rev);
		num = num/10;
	}
	printf("\t rev=%d" ,rev);
}
