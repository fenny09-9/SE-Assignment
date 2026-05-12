#include<stdio.h>
main(){
	int a=12,b=99,x=30,m=20,n;
	//modulo
	int c=a%b;
	printf("\n Remainder is %d",c);
	
	//increment decrement
	x--;//x=x+1
	printf("\n x=%d",x);
	
	n=m++; //post increment => first assign value to n then incre by itself
	printf("\n n=%d m=%d",n,m);
	n=++m;//pre increment => first increase itself then assign to n
	printf("\n n=%d m=%d",n,m);	
}
