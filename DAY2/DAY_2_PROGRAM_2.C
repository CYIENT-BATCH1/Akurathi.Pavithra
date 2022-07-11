/***2)A message ID is required to send data via CAN communication between ECU’s. 
Accept a random 2-digit message ID from the user to send data.
 Keep in mind that the given ECU only accepts binary form of the message ID. 
Write a program to convert the 2-digit ID to binary form.  **/

#include<stdio.h>
int main()
{
    int a=11;
    int x,i;
    for(i=7;i>=0;i--)
    { 
        x=(a>>i)&1;

    printf("%d",x);
        
    }


}
