
/**1) SWAPPING OF TWO NUMBERS WITH USING THIRD VARIABLE***/
#include <stdio.h>
int main()
{
	//Declare the integer variables.
	int a,b,temp;
	//Ask inputs a and b from the user to swap.
	scanf("%d",&a);
	scanf("%d",&b);
	//printing the a and b values before swapping.
	printf("Before swapping a=%d   b=%d\n",a,b);
	//logic for swapping two variables with using third variable.
	temp=a;
	a=b;
	b=temp;
	//print a and b values after swapping.
	printf("After swapping a=%d   b=%d",a,b);
}
