#include<stdio.h>
float sum(float a, float b)
{
    float s= a+b;
    return s;
}
float sub(float a, float b)
{
    float s= a-b;
    return s;
}
float mul(float a, float b)
{
    float m= a*b;
    return m;
}
float div(float a, float b)
{
    float d= a/b;
    return d;
}
int main()
{
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("3. Division \n");
    int c;
    printf("Enter your choice(1-4):");
    scanf("%d",&c);
    if(c==1){
        float a,b;
        printf("Enter 1st No.:");
        scanf("%f",&a);
        printf("Enter 2nd No.:");
        scanf("%f",&b);
        printf("The Addition of the nos. is: %lg",sum(a,b));
    }
    else if(c==2){
        float a,b;
        printf("Enter 1st No.:");
        scanf("%f",&a);
        printf("Enter 2nd No.:");
        scanf("%f",&b);
        printf("The Subtraction of the nos. is: %lg",sub(a,b));
    }
    else if(c==3){
        float a,b;
        printf("Enter 1st No.:");
        scanf("%f",&a);
        printf("Enter 2nd No.:");
        scanf("%f",&b);
        printf("The Multiplication of the nos. is: %lg",mul(a,b));
    }
    else if(c==4){
        float a,b;
        printf("Enter 1st No.:");
        scanf("%f",&a);
        printf("Enter 2nd No.:");
        scanf("%f",&b);
        printf("The Division of the nos. is: %lg",div(a,b));
    }
    else{
        printf("Invalid Option!");
    }
}
