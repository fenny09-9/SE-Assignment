#include<iostream>
using namespace std;

main(){
	int st[7],i,total=0;
	float avg;

	cout<<"\n Enter Screen Time For 7 Days";

	for(i=0;i<7;i++){
		cout<<"\n Day "<<i+1<<" : ";
		cin>>st[i];

		total=total+st[i];
	}

	avg=total/7.0;

	cout<<"\n Total Screen Time = "<<total;
	cout<<"\n Average Screen Time = "<<avg;

	if(avg>6){
		cout<<"\n Warning! Screen Time Exceeds Healthy Limit.";
	}
	else{
		cout<<"\n Screen Time Is Within Healthy Limit.";
	}
}
