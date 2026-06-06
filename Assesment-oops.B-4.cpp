#include<iostream>
#include<fstream>
using namespace std;

main(){
	char goal[100];

	ifstream read("goals.txt");

	cout<<"\n Previous Goals :\n";

	while(read.getline(goal,100)){
		cout<<goal<<endl;
	}

	read.close();

	ofstream write("goals.txt",ios::app);

	cout<<"\n Enter Today's Goal";
	cin.ignore();
	cin.getline(goal,100);

	write<<goal<<endl;

	write.close();

	cout<<"\n Goal Saved Successfully";
}
