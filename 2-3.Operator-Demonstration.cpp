#include<iostream>
using namespace std;

main(){

	int a,b;

	cout<<"\n Enter First Number : ";
	cin>>a;

	cout<<"\n Enter Second Number : ";
	cin>>b;

	// Arithmetic Operators
	cout<<"\n Arithmetic Operators";
	cout<<"\n Addition = "<<a+b;
	cout<<"\n Subtraction = "<<a-b;
	cout<<"\n Multiplication = "<<a*b;
	cout<<"\n Division = "<<a/b;

	// Relational Operators
	cout<<"\n Relational Operators";
	cout<<"\n a>b = "<<(a>b);
	cout<<"\n a<b = "<<(a<b);
	cout<<"\n a==b = "<<(a==b);

	// Logical Operators
	cout<<"\n Logical Operators";
	cout<<"\n (a>b && b>0) = "<<(a>b && b>0);
	cout<<"\n (a<b || b>0) = "<<(a<b || b>0);

	// Bitwise Operators
	cout<<"\nBitwise Operators";
	cout<<"\n a&b = "<<(a&b);
	cout<<"\n a|b = "<<(a|b);

}
