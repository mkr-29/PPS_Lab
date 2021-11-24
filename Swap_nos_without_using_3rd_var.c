#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st no.:");
    scanf("%d",&a);
    printf("Enter 2nd no.:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("1st no. after swap: %d\n",a);
    printf("1st no. after swap: %d",b);
}
