// WAP to print unit digit of a given number //
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number:\n");
    scanf("%d",&a);\
    b= a%10;
    printf("the unit digit of the number %d is %d\n",a,b);\
    return 0;
    

}