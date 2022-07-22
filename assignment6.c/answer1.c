//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{

    int i,n,m;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i+n;
        printf("sum of  %d natural number is %d\n ",n,m);
    }
    return 0;

}