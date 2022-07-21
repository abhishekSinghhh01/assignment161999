//wap to take the marks of five subjects from the user .Assume marks are given out of 100 and passing marks is 33 now display whether the candidate passed or failed
#include<stdio.h>
int main()
{
    int maths,chem,physics,computer,english;
    printf("enter the marks of five subjects\n");
    printf("maths :");
    printf("chem :");
    printf("physics: ");
    printf("computer :");
    printf("english :");
    scanf("%d %d %d %d %d",&maths,&chem,&physics,&computer,&english);
    if(maths>=33)
    {
        printf("pass\n");
    }
    else
    {
    printf("fail\n");
    }
if(chem>=33)
{
        printf("pass\n");
    }
    else
    {
    printf("fail\n");
    }
    if(physics>=33)
{
        printf("pass\n");
    }
    else
    {
    printf("fail\n");
    }
    if(computer>=33)
{
        printf("pass\n");
    }
    else
    {
    printf("fail\n");
    }
    if(english>=33)
{
        printf("pass\n");
    }
    else
    {
    printf("fail\n");
    }
    return 0;
}
