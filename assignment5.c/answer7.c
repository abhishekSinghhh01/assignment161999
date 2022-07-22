//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {

        printf("%d\n",i);
    }
    return 0;
}