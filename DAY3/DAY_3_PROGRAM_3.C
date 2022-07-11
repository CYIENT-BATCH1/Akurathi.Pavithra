/***3.Write a program to reverse a 3-digit number which is entered from keyboard. ***/

#include <stdio.h>
int main()
{
// variables.
int num,temp=0;
printf("eneter the num\n");
//Ask input from the user.
scanf("%d",&num);
//check the num is lessthan the 999 (because we want to reverse only 3 integer values and below not 4 digit value). 
if(num<=999){
//if condition is true excecute the statements.
//check the conditio if the number is greater than zero.
while(num>0)
{
    //logic to reverse the 3 digit number.
    temp=temp*10+num%10;
    num=num/10;
}
}
//print reverse of 3 digit number.
printf("reverse the num\n %d",temp);
}
