4)Take a 6-digit number as input from the user and reverse the number. 
Make sure that the number does not include a ‘0’ in any of its digits.

#include<stdio.h>
int main(){
int n,num,rev=0;//input from user
printf("enter the value");
scanf("%d",&n);//scan the value
while(n>0){
num=n%10;
rev=rev*10+num;
n=n/10;
}
printf("%d",rev);
}
