#include<stdio.h>
int prime(int a){
    int p=0,i;
    for(i=2; i<=a/2; i++){
        if(a%i==0){
            p=1;
            break;
        }
    }
    if(p==0){
        p=0;
    }
    else{
        p=1;
    }
    return p;
}
int main()
{
    int x;
    printf("Enter a No.:");
    scanf("%d",&x);
    printf("If the No. is prime or not(Yes=0,No=1): %d",prime(x));
}
