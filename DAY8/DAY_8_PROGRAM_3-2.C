/* Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3?


#include <stdio.h>

int main()
{
   int T0CON=0xf3,x,i;//assign given value in T0CON register
   for(i=2;i>=0;i--){//using for loop to itterate the value
    x=(T0CON>>i)&1;//using bitwise operators to convert the hexa values to binary values
   
   printf("%x",x);
   }
}
   
