#include<stdio.h>
//scope of variable
float pi=3.14;//global variable
void areCircle(int r){//int r formal parameter
float area= pi*r*r;
printf("\n area=%f",area);
}
main(){
	int x=100;//local variable
	printf("\n x=%d",x);
	printf("\n in main function pi=%f",pi);
	{
		int a=10;//local variable
		printf("\n in inner block pi=%f",pi);
		}
		//printf("\n a=%d",a);
		areCircle(3);
}
