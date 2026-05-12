#include<stdio.h>

// function for area of circle
void circle(float r){
    float area = 3.14 * r * r;
    printf("\nArea of Circle = %f", area);
}

// function for area of rectangle
void rectangle(float l, float b){
    float area = l * b;
    printf("\nArea of Rectangle = %f", area);
}

// function for simple interest
float simpleinterest(float p, float r, float t){
    float si;
    si = (p * r * t) / 100;
    return si;
}

int main(){

    int choice;
    float radius, l, b, p, r, t, ans;

    printf("Press 1 for Area of Circle");
    printf("\nPress 2 for Area of Rectangle");
    printf("\nPress 3 for Simple Interest");

    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice){

        case 1:
            printf("Enter radius : ");
            scanf("%f", &radius);
            circle(radius);
            break;

        case 2:
            printf("Enter length and breadth : ");
            scanf("%f %f", &l, &b);
            rectangle(l, b);
            break;

        case 3:
            printf("Enter principal, rate and time : ");
            scanf("%f %f %f", &p, &r, &t);

            ans = simpleinterest(p, r, t);

            printf("\nSimple Interest = %f", ans);
            break;

        default:
            printf("Invalid Choice");
    }

   
}
