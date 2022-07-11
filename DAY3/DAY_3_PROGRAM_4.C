/**4.Convert decimal number 204 to hex value, binary value and print the same**/

#include<stdio.h>
int main()
{
	//declaration of variables(with the given num 204).
	int n=204,x=n;
	int r,h,b,i;
	//checking the num is not equal to zero.
	while(n!=0)
	{
		//convering the decimal number to hex value.
		r=n%16;
		n=n/16;
		//logic for printing the hexadecimal value for a given decimal value.
		if(r<=0||r<=9)
			//if condition is true excecute below statement.
			h=r+48;
		else
			//if condition is false excecute below statement.
			h=r+55;
		printf("%c",h);
	}
	printf("\n");
	x==n;
	for(i=7;i>=0;i--){
		b=(x>>i)&1;//coverting the decimal to binary value.
printf("%d",b);
}
}
