//WAP to take the three digit of a number from the user and rotates its digit by one position towards the right
#include<stdio.h>
int main()
{
    int a,b,c,rotate;
    printf("enter the three digit number :\n");
    scanf("%d",&a);
    b=a%10;
    c= a/10;
    rotate=b*100+c;
    printf("the rotated number of %d is %d",a,rotate);
    return 0;
}
