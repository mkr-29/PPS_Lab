#include<stdio.h>
float lar(float a, float b, float c)
{
    float l;
    if(a>b){
        if(a>c){
            l= a;
            return l;
        }
        else{
            l= c;
            return l;
        }
    }
    else{
        if(b>c){
            l= b;
            return l;
        }
        else{
            l= c;
            return l;
        }
    }
}
int main()
{
    float a,b,c;
    printf("Enter 1st no.:");
    scanf("%f",&a);
    printf("Enter 2nd no.:");
    scanf("%f",&c);
    printf("Enter 3rd no.:");
    scanf("%f",&b);
    printf("The Largest Number is: %lg", lar(a,b,c));
}
