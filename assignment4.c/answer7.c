//WAP TO PRINT THE FIRST 10 EVEN NATURAL NUMBERS IN REVERSE ORDER 
#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}