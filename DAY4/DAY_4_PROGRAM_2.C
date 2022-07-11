/***2) SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE***/
#include <stdio.h>
int main()
{
	//Declare the integer variables.
	int a,b;
	//Ask inputs a and b from the user to swap.
	scanf("%d",&a);
	scanf("%d",&b);
        //printing the a and b values before swapping.
	printf("Before swapping a=%d  b=%d\n",a,b);
	//logic for swapping two variables without using third variable.
	a=a+b;
	b=a-b;
	a=a-b;
	//print a and b values after swapping.
	printf("After swapping a=%d  b=%d\n",a,b);
}
