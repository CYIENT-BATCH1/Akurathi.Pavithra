/***5.Right shift the value 0xFE by 3 bits and print the value***/

#include <stdio.h>
int main()
{
	//declare the variable given hex value.
	int n=0xFE;
	//Right shifting the given value by 3 bits.
	n=(n>>3);
	//print the shifted value.
	printf("%d",n);
}
