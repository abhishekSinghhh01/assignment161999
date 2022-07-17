//WAP to swap value of two integer variables//

#include<stdio.h>
 int main()
 {
    int a,b,c,d;
    printf("enter the number you want to swap:\n");
    scanf("%d %d",&a,&b);
    a= a+b;
    b= a-b;
    c= a-b;
    printf(" the swapped numbers are: %d  %d \n",c,b);
 return 0;
 }
