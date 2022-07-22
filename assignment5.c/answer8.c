//Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        printf("%d\n",i*i);
    }
    return 0;
}