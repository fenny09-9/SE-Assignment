#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp;

	temp=*a;
	*a=*b;
	*b=temp;
}

main(){
	int a,b;

	cout<<"\n Enter A";
	cin>>a;

	cout<<"\n Enter B";
	cin>>b;

	cout<<"\n Before Swapping";
	cout<<"\n A = "<<a;
	cout<<"\n B = "<<b;

	swap(&a,&b);

	cout<<"\n After Swapping";
	cout<<"\n A = "<<a;
	cout<<"\n B = "<<b;
}
