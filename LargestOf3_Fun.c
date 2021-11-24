#include<stdio.h>
int lar3(int a, int b, int c){
    int lar;
    if(a>b && a>c){
        lar=a;
    }
    else if(b>a && b>c){
        lar=b;
    }
    else{
        lar=c;
    }
    return lar;
}
int main()
{
    int x,y,z;
    printf("Enter 1st No.:");
    scanf("%d",&x);
    printf("Enter 2nd No.:");
    scanf("%d",&y);
    printf("Enter 3rd No.:");
    scanf("%d",&z);
    printf("Largest No. is: %d",lar3(x,y,z));
}
