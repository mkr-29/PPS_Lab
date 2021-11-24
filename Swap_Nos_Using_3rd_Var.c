#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter 1st no.:");
    scanf("%d",&a);
    printf("Enter 2nd no.:");
    scanf("%d",&b);
    x=a;
    a=b;
    b=x;
    printf("1st no. after swap: %d\n",a);
    printf("2nd no. after swap: %d",b);
}
