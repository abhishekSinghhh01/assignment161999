//WAP which takes the length of the side of a triangle as an input.Display the triangle is valid or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("input the three sides of the triangle:\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b>c))
    {
        printf("the triangle is valid\n");
    }
    else
    {
        printf("the triangle is not valid\n");

    }
    return 0;
}