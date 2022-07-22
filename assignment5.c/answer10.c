//Write a program to print a table of N.//#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {

        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}