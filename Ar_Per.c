#include<stdio.h>
float triar(float b, float h)
{
    float ar= 0.5*b*h;
    return ar;
}
float sqaar(float s)
{
    float ar= s*s;
    return ar;
}
float recar(float l, float b)
{
    float ar= l*b;
    return ar;
}
float trip(float a, float b, float c)
{
    float p= a+b+c;
    return p;
}
float sqap(float s)
{
    float p= 4*s;
    return p;
}
float recp(float l, float b)
{
    float p= 2*(l+b);
    return p;
}
int main()
{
    printf("1. Triangle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice(1-3):");
    int cs;
    scanf("%d",&cs);
    if(cs==1){
        printf("Triangle:\n");
        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("Enter your choice(1-2):");
        int cap;
        scanf("%d",&cap);
        if(cap==1){
            printf("Area:\n");
            float x,y;
            printf("Enter Base:");
            scanf("%f",&x);
            printf("Enter Height:");
            scanf("%f",&y);
            printf("Area of Triangle is: %lg",triar(x,y));
        }
        else if(cap==2){
            printf("Perimeter:\n");
            float x,y,z;
            printf("Enter 1st side:");
            scanf("%f",&x);
            printf("Enter 2nd side:");
            scanf("%f",&y);
            printf("Enter 3rd side:");
            scanf("%f",&z);
            printf("Perimeter of triangle is: %lg",trip(x,y,z));
        }
        else{
            printf("Invalid Input!");
        }
    }
    else if(cs==2){
        printf("Square\n");
        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("Enter your choice(1-2):");
        int cap;
        scanf("%d",&cap);
        if(cap==1){
            printf("Area:\n");
            float x;
            printf("Enter Side length:");
            scanf("%f",&x);
            printf("Area of the Square: %lg",sqaar(x));
        }
        else if(cap==2){
            printf("Perimeter:\n");
            float x;
            printf("Enter Side Length:");
            scanf("%f",&x);            
            printf("Perimeter of the Square: %lg",sqap(x));
        }
        else{
            printf("Invalid Input!");
        }
    }
    else if(cs==3){
        printf("Rectangle:\n");
        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("Enter your choice(1-2):");
        int cap;
        scanf("%d",&cap);
        if(cap==1){
            printf("Area:\n");
            float x,y;
            printf("Enter Length:");
            scanf("%f",&x);
            printf("Enter Breadth:");
            scanf("%f",&y);
            printf("Area of the Rectangle is: %lg",recar(x,y));
        }
        else if(cap==2){
            printf("Perimeter:\n");
            float x,y;
            printf("Enter Length:");
            scanf("%f",&x);
            printf("Enter Breadth:");
            scanf("%f",&y);
            printf("Perimeter of the Rectangle is: %lg",recp(x,y));
        }
        else{
            printf("Invalid Input!");
        }
    }
    else{
        printf("Invalid Input!");
    }
}
