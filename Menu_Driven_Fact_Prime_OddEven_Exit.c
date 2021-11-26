#include<stdio.h>
int main()
{
    int mc,a,i,f=1;
    scanf("%d",&mc);
    if(mc==1){
        scanf("%d",&a);
        for(i=1; i<=a; i++){
            f=f*i;
        }
        printf("Factorial value is %d\n",f);
        return main();
    }
    else if(mc==2){
        int p=0;
        scanf("%d",&a);
        for(i=2; i<=a/2; i++){
            if(a%i==0){
                p=1;
                break;
            }
            return main();
        }
        if(p==0){
            printf("Prime\n");
        }
        else{
            printf("Not prime\n");
        }
        return main();
    }
    else if(mc==3){
        scanf("%d",&a);
        if(a%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
        return main();
    }
    else if(mc==4){
        return 0;
    }
}
