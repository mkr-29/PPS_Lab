#include<stdio.h>
float per(float a, float b, float c){
    float per=a+b+c;
    return per;
}
float ar(float b, float h){
    float ar=0.5*b*h;
    return ar;
}
int main()
{
    int m;
    printf("1. Perimeter\n");
    printf("2. Area\n");
    printf("Enter your choice:");
    scanf("%d",&m);
    if(m==1){
        float x,y,z;
        printf("Enter 1st side:");
        scanf("%f",&x);
        printf("Enter 2nd side:");
        scanf("%f",&y);
        printf("Enter 3rd side:");
        scanf("%f",&z);
        printf("Perimeter of the Triangle: %lg",per(x,y,z));
    }
    else if(m==2){
        float b,h;
        printf("Enter Base:");
        scanf("%f",&b);
        printf("Enter height:");
        scanf("%f",&h);
        printf("Area of the triangle: %lg",ar(b,h));
    }    
}
