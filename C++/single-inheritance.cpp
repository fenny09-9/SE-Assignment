#include<iostream>
using namespace std;
//child class: public paarent class
class Category{
	public:
		int catid;
		char catname[20];
		void getCategory(){
			cout<<"\n Enter category id and name";
			cin>>catid>>catname;
		}
};
class Product : public Category{
	public:
		int pid;
		char pname[20];
		float price;
		
		void getProduct(){
			getCategory();
			cout<<"\n Enter pid pname and price";
			cin>>pid>>pname>>price;
		}
		void printProduct(){
			cout<<"\n Category name="<<catname;
			cout<<"\n Product name="<<pname;
			cout<<"\n Price= "<<price;
			
		}
};
main(){
	Product p1;
	p1.getProduct();
	p1.printProduct();
}

