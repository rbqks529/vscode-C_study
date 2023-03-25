#include <stdio.h>

int main(void)
{
    int array[3];
    int min, index, temp;

    for(int i=0; i<3; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i=0; i<3; i++)
    {
        min = 1000000;
        for(int j=i; j<3; j++)
        {
            if(array[j] < min)
            {
                min = array[j];
                index = j;
            }
            
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for(int i=0; i<3; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}