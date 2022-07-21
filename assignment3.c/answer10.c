//WAP which takes the cost price and selling price of a product from the user.Now calculate and print the profit and loss percentage
#include<stdio.h>
int main()
{
    int CP,SP,GAIN,LOSS,GAIN_PER,LOSS_PER;
    printf("enter the cost price CP : ");
    printf("enter the selling price SP : ");
    scanf("%d %d",&CP,&SP);
    if(SP>=CP)
    {
        GAIN = SP-CP;
        GAIN_PER = GAIN*100/CP;
        printf("the profit percentage is %d",GAIN_PER);

    }
     else
     {
        LOSS=CP-SP;
        LOSS_PER=LOSS*100/CP;
        printf("the loss percentage is %d",LOSS_PER);
     }
     return 0;
}