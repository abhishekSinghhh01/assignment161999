//WAP TO CHECK WHETHER A GIVEN NUMBER IS THREE DIGIT NUMBER OR NOT
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a>99)
    {
        printf("its a three digit number\n");
    }
            else
            {
                printf("not a three digit number");
            }
        
    return 0;
    
}