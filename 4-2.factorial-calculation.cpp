#include<iostream>
using namespace std;

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

	int num;

	cout<<"\n Enter Number : ";
	cin>>num;

	cout<<"\n Factorial = "<<fact(num);

}
