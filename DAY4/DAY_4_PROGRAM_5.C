2) EVEN AND ODD NUMBER USING CONDITIONAL OPERATOR

#include<stdio.h>
int main()
{
//Declare the variable.
int n;
//Ask the input from the user.
scanf("%d",&n);
//print the number is even or odd using conditional operator.
n%2==0?printf("Even number"):printf("Odd number");
return 0;
}
