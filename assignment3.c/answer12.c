//WAP to check whether a given alphabet is uppercase or lowercase
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character \n");
    scanf("%s",&a);
    if(a>=65 && a<=90)
    {
        printf("its an uppercase\n");
    }
    else
    {
    printf("its a lowercase");
    }
return 0;

}
