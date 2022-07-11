/****Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. And replace the empty string array element as “CYIENT”


Switch status valueMeaning


00Fault type 1 in switch


01switch is buckle


10switch is unbuckle


11Fault type 2 in switch


***/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a[]={"cherry","fruit", " ","orange","mango"};
    int size=sizeof a/sizeof(a[0]);
    int pos=0;
    printf("%d",size);
    int i;
    for(i=0;i<4;i++){
        printf("\n");
        if(a[i]==" "){
         a[i]="cyient";
         pos=i;
    printf("%s",*(a+i));
        }
    }
     printf("pos=%d\n",pos);
    return 0;
}

