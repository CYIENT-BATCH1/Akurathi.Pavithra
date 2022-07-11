/***
3)HOW TO COMPLIMENT A BIT 
**/
#include <stdio.h>
int main()
{
    int n,n1,cmplmntbit;
    //printf("enter a num:\n");
    scanf("%d", &n);
    //printf("enter a bit to set:\n");
    scanf("%d", &n1);
    cmplmntbit = n^(1 << n1);
    //print Before complementing the bit.
    printf("Before complementing the bit %d bit: %d\n", n1, n);
    //print After complementing the bit.
    printf("After complementing the bit %d bit: %d\n", n1, cmplmntbit);
    return 0;
}
