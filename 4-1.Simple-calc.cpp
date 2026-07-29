#include<iostream>
using namespace std;

// Function Definitions
int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

float divi(int a,int b){
	return a/b;
}

main(){

	int a,b,choice;

	cout<<"\n Enter First Number : ";
	cin>>a;

	cout<<"\n Enter Second Number : ";
	cin>>b;

	cout<<"\n 1.Addition";
	cout<<"\n 2.Subtraction";
	cout<<"\n 3.Multiplication";
	cout<<"\n 4.Division";

	cout<<"\n Enter Choice : ";
	cin>>choice;

	if(choice==1){
		cout<<"\n Addition = "<<add(a,b);
	}
	else if(choice==2){
		cout<<"\n Subtraction = "<<sub(a,b);
	}
	else if(choice==3){
		cout<<"\n Multiplication = "<<mul(a,b);
	}
	else if(choice==4){
		cout<<"\n Division = "<<divi(a,b);
	}
	else{
		cout<<"\n Invalid Choice";
	}

}
