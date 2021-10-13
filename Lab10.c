#include<stdlib.h>
#include<stdio.h>

int main()      // *************************************PLEASE MAKE CHANGES ACCORDING TO YOUR NEED************************************ //
{
    int a;

    printf("\n");
    printf("1. To calculate the area of a circle.");
    printf("\n");
    printf("2. To calculate the area of a squrare.");
    printf("\n");
    printf("3. To calculate the area of a rectangle.");
    printf("\n");
    printf("4. To calculate the area of a triangle.");
    printf("\n");
    printf("Enter Your Choice(1,2,3,4):");  //gave the user a choice
    scanf("%d",&a);
    printf("\n");

    if(a==1)    //if the user choose 1
    {
        double r;
        printf("Enter the radius of the circle:");
        scanf("%lf",&r);
        double ar;
        ar=3.14*r*r;
        printf("\n");
        printf("Area of the circle is:%lg",ar);
    }
    else if(a==2)
    {
        double s;
        printf("Enter the side of teh square:");
        scanf("%lf",&s);
        double ar;
        ar=s*s;
        printf("\n");
        printf("Area of the square is:%lg",ar);
    }
    else if(a==3)
    {
        double l,b;
        printf("Enter the length of the rectangle:");
        scanf("%lf",&l);
        printf("Emter the breadth of the rectangle:");
        scanf("%lf",&b);
        double ar;
        ar=l*b;
        printf("\n");
        printf("Area of the rectangle is:%lg",ar);
    }
    else if(a==4)
    {
        double b,h;
        printf("Enter the base of the triangle:");
        scanf("%lf",&b);
        printf("Enter the height of the triangle:");
        scanf("%lf",&h);
        double ar;
        ar=0.5*b*h;
        printf("\n");
        printf("Area of the Triangle is:%lg",ar);
    }
    else
    {
        printf("Choose the correct option");
    }

    return 0;
}
