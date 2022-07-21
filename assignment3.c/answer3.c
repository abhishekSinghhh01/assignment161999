//WAP to check whether a given number is even nummber or odd number
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%2==0 )
    {
        printf("number is even\n");
    }
    else
    {
        printf("its an odd number\n");
    }
    return 0;

}