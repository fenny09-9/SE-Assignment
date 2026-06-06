#include<iostream>
using namespace std;

class Calculator{
	public:
		int a,b;
		
		void add(){
			cout<<"\n Addition = "<<a+b;
		}
		
		void sub(){
			cout<<"\n Subtraction = "<<a-b;
		}
		
		void mul(){
			cout<<"\n Multiplication = "<<a*b;
		}
		
		void div(){
			cout<<"\n Division = "<<a/b;
		}
};

main(){
	Calculator c1;
	
	cout<<"Enter two numbers: ";
	cin>>c1.a>>c1.b;
	
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
}
