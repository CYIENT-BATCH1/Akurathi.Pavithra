/***(I) BITWISE OPERATOR***/

1)HOW TO SET A BIT
#include <stdio.h>

int main()
{
    int n,n1,setbit;
    //printf("enter a num:\n");
    scanf("%d", &n);
    //printf("enter a bit to set:\n");
    scanf("%d", &n1);
    //logic for setting a bit.
    setbit = (1 << n1) | n;
    //print Before setting the bit.
    printf("Before setting the bit %d bit: %d\n", n1, n);
    //print After setting the bit.
    printf("After setting the bit %d bit: %d\n", n1, setbit);
    return 0;
}
