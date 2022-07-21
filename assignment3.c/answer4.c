//WAP to check whether a number is even number or odd number without using % operator
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if((a & 1)==0)
    {
        printf("the number is even\n");
    }
    else 
    {
        printf("odd number\n");

    }
    return 0;
    
}
