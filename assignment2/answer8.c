//WAP to check whether a given number is even or odd using bitwise operator//
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    if(a&1==1)
    printf("the number is odd");
    else
    printf("the number is even");
    return 0;
}