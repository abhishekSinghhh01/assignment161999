//Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("mySirg\n ",i);
    }
    return 0;
}