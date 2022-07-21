//WAP TO CHECK WHETHER A GIVEN NUMBER IS DIVISIBLE BY 5 OR NOT
#include<stdio.h>
  int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("the number is divisible by 5\n");
    }
        else
        {
            printf("not divisible by 5");
        }
        return 0;

    }
