#include<iostream>
using namespace std;

class Person{
	protected:
		char name[20];

	public:
		void getName(){
			cout<<"\nEnter Name:";
			cin>>name;
		}
};

class Student : public Person{
	public:
		void displayStudent(){
			cout<<"\nStudent Name:"<<name;
		}
};

class Teacher : public Person{
	public:
		void displayTeacher(){
			cout<<"\nTeacher Name:"<<name;
		}
};

main(){
	Student s1;
	Teacher t1;

	s1.getName();
	t1.getName();
	s1.displayStudent();
	t1.displayTeacher();
}
