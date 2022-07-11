/**7.Write program to calculate the age of a person based on year, month as i/p*****/

#include<stdio.h>
int main()
{
    //Declaration of all integer variables.
    int day1,month1,year1,day2,month2,year2,u,v,w,x;
    //Declaration of character variable (/).
    char a;
    //Ask the input of present year from the user.
    printf("Enter present date in dd/mm/yyyy format : ");
    scanf("%d%c%d%c%d",&day1,&a,&month1,&a,&year1);
    printf("\nEnter your date of birth in dd/mm/yyyy: ");
    //Ask the input of your date of birth from the user.
    scanf("%d%c%d%c%d",&day2,&a,&month2,&a,&year2);
    printf("\nYour present age is: ");
    u=day1-day2;
    v=month1-month2;
    w=year1-year2;
    x=u;
    //calculate age using if condition.
    if(u<0)
    {
	//if condition is true excecute if statement.
        u=31+u;
    }
    else
    //if condition is false excecutes else part.
    u=day1-day2;
    if(v<=0)
    { if(x<0)
      { v=11+v;
        w=w-1;
      }
      if(x>0)
      { w=year1-year2-1;
        v=v+12;
      }
    }
    else
    v=month1-month2;
      //print the age along with days.
    printf("%d Years %d Months %d Days",w,v,u);
    return 0;
}

