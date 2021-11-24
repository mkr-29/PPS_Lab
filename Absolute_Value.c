#include<stdio.h>
int abs_val(int a){
    int num;
    if(a<0){
        num=a*(-1);
    }
    else{
        num=a;
    }
    return num;
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Absolute value of the number entered is: %d",abs_val(x));
}
