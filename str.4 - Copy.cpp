#include<stdio.h>
#include<string.h>
main(){
    char pwd[20],l,str[20];
    printf("\n Enter password: ");
    scanf("%s", pwd);
    printf("\n Password = %s", pwd);
 l = strlen(pwd);
    printf("\nString length = %d", l);
    strupr(pwd);
    printf("\nUpper case = %s", pwd);
    strlwr(pwd);
    printf("\nLower case = %s", pwd);
    strcpy(str, pwd);
    printf("\nSecond string = %s", str);
    l = strcmp("abc", "abc");
    printf("\nOutput of strcmp = %d", l);
}
