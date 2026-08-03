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

class B : virtual public A{
	public:
		int b;
		void getB(){
			cout<<"\n Enter b";
			cin>>b;
		}
};
//child inherit parent
class C: virtual public A{
	public: 
	int c;
	void getC(){
		cout<<"\n enter c";
		cin>>c;
	}
};
	class D:  public B,public C{
	public: 
	int d;
	void getD(){
		cout<<"\n enter d";
		cin>>d;
	}
	void add(){
		cout<<"\n add="<<a+b+c+d;
	}
};

main(){
	D c1;
	c1.getA();
	c1.getB();
	c1.getC();
	c1.getD();
	c1.add();
}
