//WAP to input a number from the user and also input a digit .Append a digit in the number and print the resulting number example 234 and digit =4 then make x=2344
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number ;\n");
    scanf("%d %d",&a,&b);
    c=a*10+b;
    printf("the result of %d and append number of %d is %d",a,b,c);
    return 0;

}