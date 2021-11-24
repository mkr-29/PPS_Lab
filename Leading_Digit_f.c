#include<stdio.h>
int ld(int a){
    int b,ldg;
    while(a!=0){
        b=a%10;
        a=a/10;
    }
    ldg=b;
    return ldg;
}
int main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    printf("Leading Digit is: %d",ld(x));
}
