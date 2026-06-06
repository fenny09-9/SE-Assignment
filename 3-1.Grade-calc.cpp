#include<iostream>
using namespace std;

main(){

	int marks;

	cout<<"\n Enter Marks : ";
	cin>>marks;

	if(marks>=90){
		cout<<"\n Grade A";
	}
	else if(marks>=75){
		cout<<"\n Grade B";
	}
	else if(marks>=50){
		cout<<"\n Grade C";
	}
	else if(marks>=35){
		cout<<"\n Grade D";
	}
	else{
		cout<<"\n Fail";
	}

}
