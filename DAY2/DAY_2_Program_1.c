/**1) Consider the phone number of a person as user input and find the sum of its digits. ***/

int main()
{
    int n,a,sum=0;
    printf("enter the phone number");
    scanf("%d",&n);
        while(n>0)
    {
    a=n%10;
    sum=sum+a;
    n=n/10;
    }
printf("sum:%d",sum);
    
}

