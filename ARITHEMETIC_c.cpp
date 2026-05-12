#include<stdio.h>
main(){
	int a,b,ans;
	float div;
	printf("\n Enter the value of a and b:");
	scanf("%d %d" ,&a,&b);
	ans = a+b;
	printf("\n addition=%d" ,ans);
	ans = a-b;
	printf("\n sub=%d" ,ans);
	ans = a*b;
	printf("\n mul=%d",ans);
	div = a/b;
	printf("\n division=%f" ,div);
	
	ans = (5+9)/4;
	printf("\n ansss=%d" ,ans);
}
