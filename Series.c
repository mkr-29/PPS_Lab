#include<stdio.h>
#include<math.h>
float series(int a, int b){
    int i,j,s,f=1,fact;
    float sum=0;
    for(i=1; i<=b; i++){
        s=2*i;
        for(j=1; j<=s-2; j++){
            f=f*j;
        }
        fact=f;
        f=1;
        sum=sum+pow(a,i)/fact;
    }
    return sum;
}
int main(){
    int p,q;
    printf("Enter a No.:");
    scanf("%d",&p);
    printf("Enter the No. upto which you want to find the sum of series:");
    scanf("%d",&q);
    printf("Sum of the series is: %lg",series(p,q));
}
