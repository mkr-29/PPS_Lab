#include<stdio.h>   //included standard input output header file.
int prime(int a){       //defined a function prime which takes an integer input
    int p=0,i;      //defined the data type of 2 variables as int and put p=0
    for(i=2; i<=a/2; i++){      //started a for loop from 2 to half of the input number (started from 2 as first prime no. is 2... to half of the entered no. as it would be the largest number which can divide that entered no.
        if(a%i==0){     //checked if entered number is *not* prime(if remainter comes out to be 0 when number is divided by i)
            p=1;    //putting p=1 as it is the required output if the number is not a prime no.
            break;  //stopping the loop right here if the above conditon is met
        }
    }       //a number is a prime no. if it is divisible by 1 and itself.
    if(p==0){   //p will have value 0 if entered np. is a prime number
        p=0;    //not necessary.
    }
    else{   //else it is not a prime no. (if in for loop p's value changed to 1)
        p=1;    //not necessary
    }
    return p;   //returning value of p(0 if the netered no. is prime and 1 if it is not.)
}
int main()
{
    int x;      //set a variable to data type int
    printf("Enter a No.:");     //giving instructions to the user
    scanf("%d",&x);     //taking input from the user
    printf("If the No. is prime or not(Yes=0,No=1): %d",prime(x));      //Printing the desired output.
}
