#include<stdio.h>
float sma(float a, float b, float c)
{
    float l;
    if(a<b){
        if(a<c){
            l= a;
            return l;
        }
        else{
            if(b<c){
                l= b;
            }
        }
    }
    else{
        if(b>c){
            l= c;
            return l;
        }
        else{
            l= b;
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
    printf("The Smallest Number is: %lg", sma(a,b,c));
}
