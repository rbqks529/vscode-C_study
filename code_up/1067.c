#include <stdio.h>

int main(void)
{
    int number = 0;

    scanf("%d", &number);

    if(number < 0)
    {
        if((number%2) ==0)
        {
            printf("minus\neven\n");
        }
        else
        {
            printf("minus\nodd");

        }
    }
    if(number > 0)
    {
        if((number%2) ==0)
        {
            printf("plus\neven\n");
        }
        else
        {
            printf("plus\nodd");

        }
    }


    return 0;
}