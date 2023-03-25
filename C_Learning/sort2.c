#include <stdio.h>

int main(void)
{
    int array[1000];
    int n, min, index, temp;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i=0; i<n; i++)
    {
        min = 10000;
        for(int j=i; j<n; j++)
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

    for(int i=0; i<n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}