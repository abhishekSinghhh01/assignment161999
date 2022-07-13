#include<stdio.h>
int main()
{
    char a[100];
    int length;
    printf("enter string to calculate the length\n:");
    scanf("%s",&a);
    length= strlen(a);
    printf("the length of the string is %d \n",length);
    return 0;
}