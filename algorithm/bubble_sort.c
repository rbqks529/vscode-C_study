#include <stdio.h>

//버블정렬 (2023.03.04)
//O(N^2) - 빅오는 같지만 실제로 수행시간을 분석해 보면 선택정렬보다 더 느림

int main(void)
{
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for(i=0; i<10; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}