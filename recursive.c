#include<stdio.h>
//5! =5*4! 5*4*3! 5*4*3*2! 5*4*3*2*1
int factFind(int num){
	if(num==1){
		return 1;
		
	}
	int f = num* factFind(num-1);//5*f(4)
	return f;
}
main(){
	printf("\n factorial of 5=%d",factFind(5));
}
