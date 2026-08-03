#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void getA(){
			cout<<"\n Enter a";
			cin>>a;
		}
};
//parent inherit grandparent
class B : public A{
	public:
		int b;
		void getB(){
			cout<<"\n Enter b";
			cin>>b;
		}
};
//child inherit parent
class C: public B{
	public: 
	int c;
	void getC(){
		cout<<"\n enter c";
		cin>>c;
	}
	void add(){
		cout<<"\n add="<<a+b+c;
	}
};
main(){
	C c1;
	c1.getA();
	c1.getB();
	c1.getC();
	c1.add();
}
