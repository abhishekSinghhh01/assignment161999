//WAP to find the position of first 1 in LSB//
#include <stdio.h>

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if(a & 1)
        printf("LSB of %d is 1", a);
    else
        printf("LSB of %d is 0", a);

    return 0;
}