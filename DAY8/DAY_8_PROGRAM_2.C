/*Write a program in C to sort an array using Pointer. The sample output must be as below.



#include<stdio.h>
int main(){
int a[]={25,45,89,15,82};//assign some values 
int n=sizeof(a)/sizeof(a[0]);//calucalte the size of array
int i=0,j=0,temp;//Declare a varibales
for(i=0;i<n;i++){//using for loop 
    for(j=i+1;j<n;j++){//using for loop
        if(*(a+i)>*(a+j)){//if condition check the greatr value
            temp=*(a+i);//grater value is assign to temp variable
            *(a+i)=*(a+j);//(a+j)value assign to (a+i)
            *(a+j)=temp;//temp value assign to (a+j)
        }
    }
}
for(i=0;i<n;i++){//using for loop to ittrate the values
    printf("%d ",*(a+i));
}
}
