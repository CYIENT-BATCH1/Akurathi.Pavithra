H)CONDITIONAL OPERATOR  

1)BIGGEST OF TWO NUMBERS USING CONDITIONAL OPERATOR

#include<stdio.h>
int main()
{
    //Declare integer variables.
    int a,b,big;
    //Ask inputs a and b from the user.
    scanf("%d%d",&a,&b);
    //find the biggest of two numbers using conditional operator.
    (a>b)?(big=a):(big=b);
    //print which is biggest number.
    printf("a=%d\nb=%d\nThe biggest num is : %d\n",a,b,big);
    return 0;
}
