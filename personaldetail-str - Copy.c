#include<stdio.h>

main(){

  char name[50];
    char email[50];
    char contact[20];
    char age[10];
    char address[100];

    printf("Enter Name: ");
    gets(name);

    printf("Enter Email: ");
    gets(email);

    printf("Enter Contact: ");
    gets(contact);

    printf("Enter Age: ");
    gets(age);

    printf("Enter Address: ");
    gets(address);

    printf("\n ============================");
    printf("\n Name    : %s", name);
    printf("\n Email   : %s", email);
    printf("\n Contact : %s", contact);
    printf("\n Age     : %s", age);
    printf("\n Address : %s", address);
    printf("\n ============================");

    return 0;
}
