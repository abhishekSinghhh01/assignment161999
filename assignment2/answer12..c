//Assume price of 1 USD is 76.23 .WAP to take the amount in inr and convert it into USD
#include<stdio.h>
int main()
{
    float a,b=76.23,c;
    printf("enter the rupee amount you want to convet it into USD;\n");
    scanf("%f",&a);
    c= a/b;
    printf("the amount in USD is %f",c);
    return 0;
}