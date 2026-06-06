#include<iostream>
#include<fstream>
using namespace std;

main(){
	int ch,hours,total=0;
	char day[20];

	do{
		cout<<"\n\n===== STUDENT PRODUCTIVITY TRACKER =====";
		cout<<"\n 1. Log Study Hours";
		cout<<"\n 2. Generate Weekly Report";
		cout<<"\n 3. Exit";
		cout<<"\n Enter Choice";
		cin>>ch;

		switch(ch){
			case 1:
			{
				ofstream file("study.txt",ios::app);

				cout<<"\n Enter Day";
				cin>>day;

				cout<<"\n Enter Study Hours";
				cin>>hours;

				file<<day<<" "<<hours<<endl;
				file.close();

				cout<<"\n Data Saved Successfully";
				break;
			}

			case 2:
			{
				ifstream file("study.txt");

				char d[20];
				int h;
				total=0;

				cout<<"\n\n Weekly Report";
				cout<<"\n Day\tHours\n";

				while(file>>d>>h){
					cout<<"\n "<<d<<"\t"<<h;
					total=total+h;
				}

				cout<<"\n\n Total Study Hours = "<<total;
				cout<<"\n Average Study Hours = "<<total/7.0;

				file.close();
				break;
			}

			case 3:
			{
				cout<<"\n Thank You";
				break;
			}

			default:
			{
				cout<<"\n Invalid Choice";
			}
		}

	}while(ch!=3);
}
