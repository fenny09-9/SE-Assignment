#include<iostream>
using namespace std;
class Maths{
	public:
		int x,y;
		//Simple (Default) Constructor
		Maths(){
			x=100;
			y=200;
			cout<<"\n Default con. called";
		}
		//Parameterized Constructor
		Maths(int a,int b){
			x=a;
			y=b;
		}
		//Copy Constructor
		Maths(Maths const &m2){
			x= m2.x;
			y= m2.y;
		}
		void display(){
			cout<<"\n x="<<x<<"\t y="<<y;
		}
		
};
main(){
	Maths m1;
	m1.display();
	Maths m2(12,34);
	m2.display();
	Maths m3 = m2;
	m3.display();
}
