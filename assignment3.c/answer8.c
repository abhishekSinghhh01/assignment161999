//WAP to check whether a given year is leap year or not
#include<stdio.h>
int main()
{
    int a;
    printf("enter the year\n");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("the year is leap year");
    }
    else 
    { printf("the year is not a leap year");
    }
    return 0;
}
