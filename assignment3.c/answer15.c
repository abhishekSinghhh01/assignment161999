//WAP TO CHECK WHETHER  GIVEN NUMBER IS POSITIVE NEGATIVE OR ZERO
    #include<stdio.h>
    int main()
    {
        int a;
        printf("enter a number\n");
        scanf("%d",&a);
        if(a>=0)
        {
            if(a==0)
            {
                printf("zero");
            }
            else 
            {
            printf("positive");
            }
        
        }
        else 
        {
            printf("negative\n");
        }

    }