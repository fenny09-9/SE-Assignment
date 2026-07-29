#include<iostream>
using namespace std;

class Rectangle{

	public:

	int length,width,area;

	void getData(){

		cout<<"\n Enter Length : ";
		cin>>length;

		cout<<"\n Enter Width : ";
		cin>>width;
	}

	void calculate(){

		area = length * width;

		cout<<"\n Area of Rectangle = "<<area;
	}
};

main(){

	Rectangle r;

	r.getData();
	r.calculate();

}
