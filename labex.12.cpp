#include<stdio.h>

struct Student{
	char name[20];
	int roll;
	float marks;
};

main(){

	struct Student s[3];
	int i;

	printf("\n Enter details of 3 students");

	for(i=0;i<3;i++){

		printf("\n Enter name");
		scanf("%s",s[i].name);

		printf("\n Enter roll number");
		scanf("%d",&s[i].roll);

		printf("\n Enter marks");
		scanf("%f",&s[i].marks);
	}

	printf("\n Student Details");

	for(i=0;i<3;i++){

		printf("\n Name = %s",s[i].name);
		printf("\n Roll Number = %d",s[i].roll);
		printf("\n Marks = %f",s[i].marks);
		printf("\n");
	}
}
