//WAP to make the last digit of a number stored in a variable as zero example : if a =235 then make it 230
#include<stdio.h>
int main()
{
    int n,b,c;
    printf("enter a number:\n");
    scanf("%d",&n);
    b=n%10;
    c=n-b;
    printf("%d",c);
    return 0;
}