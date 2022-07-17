//WAP to print a given number without its last digit//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number :\n");
    scanf("%d",&a);
    if (a>=10)
      {
        b = a%10;
        c = a/10;
        printf("the remaining digit of the num %d is %d",a,c);
      }
       else
       {
        printf("its a single digit number");
       }
       return 0;

}