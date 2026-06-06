#include<iostream>
using namespace std;

// Global Variable
int x=100;

void demo(){

	// Local Variable
	int y=50;

	cout<<"\n Global Variable x = "<<x;
	cout<<"\n Local Variable y = "<<y;

}

main(){

	cout<<"\n Global Variable in main = "<<x;

	demo();

}
