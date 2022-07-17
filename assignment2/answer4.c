//WAP to swap the value of two variables without using the third variable//
#include<stdio.h>
int main()
{ int a,b;
    printf("enter the num you want to be swaped:\n");
    scanf("%d %d",&a,&b);
     a= a+b;
     b= a-b;
     a= a-b;
     printf("the value of the swapped number is %d %d",a,b);
     return 0;

}