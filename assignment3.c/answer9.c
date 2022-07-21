//WAP to check the greatest among three is given numbers.Print the number once if the greatest number appears two or three times
#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b & a>c)
    {
        printf("the number %d is greater",a);

    }
    if(b>c)
    {
        printf(" %d is greater",b);

    }
    else 
    {
        printf("%d is greater",c);
    }
    return 0;

}