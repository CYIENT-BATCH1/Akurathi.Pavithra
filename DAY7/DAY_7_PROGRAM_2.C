2.Write a code to swap even bits with odd bits in unsigned long variable(uint64).
Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit


#include <stdio.h>
//
unsigned int swapBits(unsigned int x)
{
//Declaration two variables.
unsigned int even_bits = x & 0xAAAAAAAA;
unsigned int odd_bits = x & 0x55555555;
even_bits >>= 1;//Right shift even bits.  
odd_bits <<= 1;//Left shift odd bits.
return (even_bits | odd_bits);
}
int main()
{
    //assign the input number to variable x
    unsigned int x = 64;
    printf("%u ", swapBits(x));
        return 0;
}
