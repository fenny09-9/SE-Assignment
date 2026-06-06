#include<iostream>
using namespace std;

main(){

	int a=10;
	float b=5.5;
	float result;
	int x;

	// Implicit Type Conversion
	result = a + b;

	cout<<"\n Implicit Conversion Result = "<<result;

	// Explicit Type Conversion
	x = (int)b;

	cout<<"\n Explicit Conversion Result = "<<x;

}
