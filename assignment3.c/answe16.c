//WAP to check whether a given character is an alphabet(uppercasse), alphabet(lowercase),digit or a special character
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character\n");
    scanf("%s",&a);
    if(a>=65 && a<=90)
    {
      printf("its a uppercase alphabet\n");
    }
    else
    {
        if(a>=97 && a<=122)
        {
            printf("its a lowercase alphabet\n");
        }
        else
        {
            printf("its a digit or a special character\n ");
        }
    }
    
}