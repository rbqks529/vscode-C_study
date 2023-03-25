#include <stdio.h>

int main(void)
{
    int i, j, k;

    for(i=20; i>0; i--)
    {
        for(k=20-(i); k>0; k--)
        {
            printf(" ");
        }
        for(j=0; j<i-1; j++)
        {
            printf("*");
        }
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0; i<20; i++)
    {
        for(k=20-(i+1); k>0; k--)
        {
            printf(" ");
        }
        for(j=0; j<(i+1); j++)
        {
            printf("*");
        }
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}