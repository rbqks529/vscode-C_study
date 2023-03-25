#include<stdio.h>

int array[1000001];

void quickSort(int *data, int start, int end)
{
    if(start >= end)
    {
        return;
    }

    int i = start + 1;
    int j = end;
    int key = start;
    int temp;

    while(i <= j)
    {
        while(i <= end && data[key] >= data[i])
        {
            i++;
        }
        while(j > start && data[key] <= data[j])
        {
            j--;
        }
        if(i > j)
        {
            temp = data[key];
            data[key] = data[j];
            data[j] = temp;
        }
        else
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}

int main(void)
{
    int number;

    scanf("%d", &number);

    for(int i=0; i<number; i++)
    {
        scanf("%d", &array[i]);
    }

    quickSort(array, 0, number-1);

    for(int i=0; i<number; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}