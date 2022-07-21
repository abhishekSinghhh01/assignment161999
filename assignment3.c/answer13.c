//WAP TO CHECK WHETHER A GIVEN NUMBER IS DIVISIBLE BY 3 AND DIVISIBLE BY 2
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("the number is divisible by 3\n");

    }
    else
    {
        printf("number is not divisible by 3 \n");

    }
   if(a%2==0)
    {
        printf("the number is divisible by 2\n");

    }
    else
    {
        printf("number is not divisible by 2 \n");

    }

    return 0;
}