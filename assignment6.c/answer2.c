//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{

    int i,n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
         sum=sum+ i;  
        }
    }
    printf("%d",sum);
    return 0;

}