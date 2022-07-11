/**3.program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0” **/


PROGRAM:-

#include <stdio.h>
int main()
{
  //Declare variables.
  int num1,num2;
  printf("enter the values");
  fflush(stdout);
  //Ask inputs from the user.
  scanf("%d%d",&num1,&num2);
  //check the if condition for clearing  bit.
  if((28 & num1) == 28)
  {
      //if condition is true excecute the below 
      num2=num2&0xF0;
      printf("%d",num2);
  }
  //if condition is false excecute else part.
  else
  printf(" not equal nothing");

}
===================================================================================================================================================
