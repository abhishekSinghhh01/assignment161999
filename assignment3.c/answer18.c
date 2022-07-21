//WAP which takes the month number as an input and display the numbers of days in that month
#include<stdio.h>
int main()
{
    int a;
    printf("enter the month number\n");
    scanf("%d",&a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    {
        printf("the month has 31 days");
    }
    else
    {
        if(a==4 || a==6 || a==9 || a==11)
        {
            printf("month has 30 days\n");
        }
        else
        {
            if(a%2==0)
            {
                printf("the month has 28/29 days");
            }
            else
            {
                printf("the number is invalid");
            }
        }
    }
    return 0;
}