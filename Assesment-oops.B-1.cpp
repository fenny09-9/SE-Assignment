#include<iostream>
using namespace std;

main(){
	int hours;

	cout<<"\n Enter Hours Studied Today";
	cin>>hours;

	if(hours>=8){
		cout<<"\n Excellent! Keep It Up.";
	}
	else if(hours>=5){
		cout<<"\n Good Job! You Are Doing Well.";
	}
	else if(hours>=2){
		cout<<"\n Study More For Better Results.";
	}
	else{
		cout<<"\n You Need More Focus And Practice.";
	}
}
