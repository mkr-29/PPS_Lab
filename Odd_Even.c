#include<stdio.h>
int main()
{
    int a;    // declared an integer a
    printf("Enter a Number:");  
    scanf("%d",&a);   //took input from the user
    if(a%2==0){   //checked if the remainder is 0 when divided the input number by 2
        printf("%d is an even number.",a);    //printed the number to be even when remainder comes to be 0
    }
    else{   //else printing the number to be odd
        printf("%d is an odd number.",a);
    }
}
