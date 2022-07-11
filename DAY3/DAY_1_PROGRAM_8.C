/**8.Write program to check given i/p by user is alphabet or not alphabet using conditional operator***/

#include <stdio.h>
int main()
{
	//Declare the character variable.
	char ch;
	//input from the user.
	scanf("%c",&ch);
	//print whether the input is alphabet or not.
	((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("is alphabet"):printf("is not an alphabet");
}
