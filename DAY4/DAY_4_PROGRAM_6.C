/**3) POSITIVE OR NEGATIVE NUMBER USING CONDITIONAL OPERATOR ***/

#include<stdio.h>
int main()
{
    //Declare the variable.
    int a;
    //Ask the input from the user.
    scanf("%d",&a);
    //print the num whether it is positive or negative.
    (a>0)?printf("positive num\n"):printf("Negative num\n");
    return 0;
}
