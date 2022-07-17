//WAP to print size of an int,a float,a char and a double type variable//
#include<stdio.h>
int main()
{
    int a,b,c,d;
    

a=sizeof(int);
b=sizeof(char);
c=sizeof(float);
d=sizeof(double);
printf("Size of int is %d\n", a);
printf("Size of char is %d\n", b);
printf("Size of float is %d\n", c);
printf("Size of double is %d\n", d);
return 0;
}
