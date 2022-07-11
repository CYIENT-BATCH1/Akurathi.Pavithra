/****4) GIVEN NUMBER IS POWER OF 2 OR NOT*/

#include <stdio.h>
int checkPowerOf2(unsigned int num)
{
    // Check if the number has only one set bit
    if ((num & (num - 1)) != 0)
        return 0;
    return 1;
}

int main()
{
    //Declaration of unsigned integer.
    unsigned int num = 0;
    //Ask input from the user.
    scanf("%d", &num);
    //check the input is power of 2 or not.
    if (checkPowerOf2(num))
        //if condition is true print num is power of 2.
        printf("Given number is power of 2.\n");
    else
        //if condition is false print num is not power of 2.
        printf("Given number is not power of 2.\n");

    return 0;
}
