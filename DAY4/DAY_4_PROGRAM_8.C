/****
2)HOW TO CLEAR A BIT***/

#include <stdio.h>
int main()
{
    int n,n1,clearbit;
    //printf("enter a num:\n");
    scanf("%d", &n);
    //printf("enter a bit to set:\n");
    scanf("%d", &n1);
    clearbit = n & (~(1 << n1));
    //print Before clearing the bit.
    printf("Before clearing the bit %d bit: %d\n", n1, n);
    //print After clearing the bit.
    printf("After clearing the bit %d bit: %d\n", n1, clearbit);
    return 0;
}
