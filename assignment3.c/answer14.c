//WAP TO CHECK WHETHER THE NUMBER IS DIVISIBLE BY 7 OR DIVISIBLE BY 3
 #include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%7==0)
    {
        printf("the number is divisible by 7\n");

    }
    else
    {
        printf("number is not divisible by 7 \n");

    }
   if(a%3==0)
    {
        printf("the number is divisible by 3\n");

    }
    else
    {
        printf("number is not divisible by 3 \n");

    }

    return 0;
}