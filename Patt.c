#include<stdio.h>
#include<math.h>
int main(){
    int a;  //initialized a varible to take an interger input.
    int i,j;    //initialized 2 variables to use in the for loop.
    scanf("%d",&a);    //took input form the user.
    for(i=1-a; i<a; i++){   //started a for loop for i=1=a; [eg.: if the input is 4; then i=1-4=-3. Therefore i=-3; then set a condition for i to be less than the input. ie. i<a: i<4=3; then incrementing i for each iteration.].
        for(j=1-a; j<a; j++){   //started a for loop for j=1-a; same as above... so here you have i in the range -3 to 3 which counts to 7 is you count... like -3,-2,-1,0,1,2,3... and for input 4 there should be 7 rows and columns ie. 4+3. if the input is 5 then there should be 5+4=9 rows and columns.
            if(abs(i)>abs(j)){  //so now comparing if absolute value of i is > absolute value of j. ie. |i|>|j|.
                printf("%2d",abs(i)+1); //if above condition is met then print absolute value of i+1 ie. = |-3|+1=4. but since it is not true for this iteration as both i and j = -3 and |-3|!>|-3|. so the else statement is printed for the first iteration.
            }
            else{   //here absolute value of j+1 is printed ie, = |-3|+1 = 4; if the above "if" condition is not met.
                printf("%2d",abs(j)+1); // look below the code now.
            }// now after increasing value of j with 1 ie. -3+1=-2(for loop 2nd itr.); Go to line 9, and now the condition of if statement is met as |-3|>|-2|:3>2; so absolute value of i+1 is printed ie. |-3|+1=4 [2nd itr.];
        }
        printf("\n");
    }
}
//  for loop j:
//  1st itr.: 4     //|-3|!>|-3|... 3!>3 else part executed
//  2nd itr.: 4 4       //|-3|>|-2|...  3>2 if part executed
//  3rd itr.: 4 4 4         //|-3|>|-1|...  3>1 if part executed again
//  4th itr.: 4 4 4 4           //|-3|>|0|...  3>0 if part executed
//  5th itr.: 4 4 4 4 4         //|-3|>|1|...  3>1 if part executed
//  6th itr.: 4 4 4 4 4 4       //|-3|>|2|...  3>2 if part executed
//  7th itr.: 4 4 4 4 4 4 4     //|-3|>|3|...   3!>3 else part executed //This is the final result for the first row
//  8th itr.: //j becomes 4 but in the for loop j<a so the for loop for j stops here
//////////////////////////////////////////////////////////////////////////
//  for loop i, i becomes -3+1= -2 ie. 2nd row; now in j loop: 
//  1st itr.: 4     //|-2|!>|-3|... else part executed ie. abs(j)+1= |-3|+1=4;
//  2nd itr.: 4 3   //|-2|!>|-2|... else part executed ie. |-2|+1= 3;
//  3rd itr.: 4 3 3     //|-2|>|-1|... if part executed ie. |-2|+1=3;
//  4th itr.: 4 3 3 3       //|-2|>|0|... if part executed ie. |-2|+1=3;
//  5th itr.: 4 3 3 3 3     //|-2|>|1|... if part
//  6th itr.: 4 3 3 3 3 3       //|-2|!>|2|... else part ie |2|+1=3;
//  7th itr.: 4 3 3 3 3 3 4     //now |-2|!>|3|... else part... ie. |3|+1=4;    //2nd row is printed
//  8th itr.: //now the condition for j loop is not met and the j loop ends.
//similarly finally your desired outpur is printed.
//////////////////////////////////////////////////////////////////////
// for each itr. of i;
// itr 1: 4 4 4 4 4 4 4
// itr 2: 4 3 3 3 3 3 4
// itr 3: 4 3 2 2 2 3 4
// itr 4: 4 3 2 1 2 3 4
// itr 5: 4 3 2 2 2 3 4
// itr 6: 4 3 3 3 3 3 4
// itr 7: 4 4 4 4 4 4 4
// itr 8: // now the contion in for loop of i is not met and the loop ends and the program too.
