8. I). Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”

#include <stdio.h>
int main()
{
        //Declare two variables.
    int n=0x1a;
    int n1=0x23;
    //Do right shift for the hex vaue with bit position 2.
    n=n>>2;
    //check n value is equal to 0x06.
    if(n==0x06)
    {
        n1|=((1<<7)|(1<<6)|(1<<3));
        printf("%x",n1);
      //print output.
    }
}
