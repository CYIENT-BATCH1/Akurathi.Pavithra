/**6.Write program to accept hex value as i/p and right shift bit value also as i/p and print the value after doing the hex right shift***/

#include <stdio.h>
int main()
{
	//Accept the hex value as a input and right shift bit value also as i/p.
	int b=0xEF>>3;
	//print the value after doing the hex right shift.
	printf("%x",b);
}
