#include<stdio.h>
#include<math.h>
float sacuboid(float l, float b, float h)
{
    float sa= 2*(l*b + b*h + h*l);
    return sa;
}
float vocuboid(float l, float b, float h)
{
    float vo= l*b*h;
    return vo;
}
float sacube(float s)
{
    float sa= 6*s*s;
    return sa;
}
float vocube(float s)
{
    float vo= s*s*s;
    return vo;
}
float sacyl(float r, float h)
{
    float sa= 2*3.14*r*h + 2*3.14*r*r;
    return sa;
}
float vocyl(float r, float h)
{
    float vo= 3.14*r*r*h;
    return vo;
}
float sacone(float r, float h)
{
    float u=h*h+r*r;
    float sa= 3.14*r*(r+sqrt(u));
    return sa;
}
float vocone(float r, float h)
{
    float vo= 3.14*r*r*(h/3);
    return vo;
}
int main()
{
    printf("1. Cuboid\n");
    printf("2. Cube\n");
    printf("3. Cylinder\n");
    printf("4. Cone\n");
    printf("Enter your choice(1-4):");
    int cm;
    scanf("%d",&cm);
    if(cm==1){
        printf("Cuboid:\n");
        printf("1. Surface Area\n");
        printf("2. Volume\n");
        printf("Enter your choice(1-2):");
        int ic;
        scanf("%d",&ic);
        if(ic==1){
            printf("Surface Area\n");
            float l,b,h;
            printf("Enter Length:");
            scanf("%f",&l);
            printf("Enter Breadth:");
            scanf("%f",&b);
            printf("Enter Height:");
            scanf("%f",&h);
            printf("Surface Area of Cuboid: %lg",sacuboid(l,b,h));
        }
        else if(ic==2){
            printf("Volume:\n");
            float l,b,h;
            printf("Enter Length:");
            scanf("%f",&l);
            printf("Enter Breadth:");
            scanf("%f",&b);
            printf("Enter Height:");
            scanf("%f",&h);
            printf("Volume of Cuboid: %lg",vocuboid(l,b,h));
        }
        else{
            printf("Invalid Input!");
        }
    }
    else if(cm==2){
        printf("Cube:\n");
        printf("1. Surface Area\n");
        printf("2. Volume\n");
        printf("Enter your choice(1-2):");
        int ic;
        scanf("%d",&ic);
        if(ic==1){
            printf("Surface Area\n");
            float s;
            printf("Enter Side:");
            scanf("%f",&s);
            printf("Surface Area of Cube: %lg",sacube(s));
        }
        else if(ic==2){
            printf("Volume:\n");
            float s;
            printf("Enter Side:");
            scanf("%f",&s);
            printf("Volume of Cube: %lg",vocube(s));
        }
        else{
            printf("Invalid Input!");
        }
    }
    else if(cm==3){
        printf("Cylinder:\n");
        printf("1. Surface Area\n");
        printf("2. Volume\n");
        printf("Enter your choice(1-2):");
        int ic;
        scanf("%d",&ic);
        if(ic==1){
            printf("Surface Area\n");
            float r,h;
            printf("Enter Radius:");
            scanf("%f",&r);
            printf("Enter Height:");
            scanf("%f",&h);
            printf("Surface Area of Cylinder: %lg",sacyl(r,h));
        }
        else if(ic==2){
            printf("Volume:\n");
            float r,h;
            printf("Enter Radius:");
            scanf("%f",&r);
            printf("Enter Height:");
            scanf("%f",&h);
            printf("Volume of Cylinder is: %lg", vocyl(r,h));
        }
        else{
            printf("Invalid Input!");
        }
    }
    else if(cm==4){
        printf("Cone:\n");
        printf("1. Surface Area\n");
        printf("2. Volume\n");
        printf("Enter your choice(1-2):");
        int ic;
        scanf("%d",&ic);
        if(ic==1){
            printf("Surface Area\n");
            float r,h;
            printf("Enter Radius:");
            scanf("%f",&r);
            printf("Enter Height:");
            scanf("%f",&h);
            printf("Surface area of Cone is: %lg", sacone(r,h));
        }
        else if(ic==2){
            printf("Volume:\n");
            float r,h;
            printf("Enter Radius:");
            scanf("%f",&r);
            printf("Enter Height:");
            scanf("%f",&h);
            printf("Volume of Cone is: %lg",vocone(r,h));
        }
        else{
            printf("Invlid Input!");
        }
    }
    else{
        printf("Invalid Input!");
    }
}
