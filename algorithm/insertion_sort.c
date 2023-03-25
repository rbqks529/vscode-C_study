#include <stdio.h>

//삽입 정렬 (2023.03.04)
//O(N^2) - 삽입정렬이 버블과 선택보다는 빠름

int main(void)
{
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 6, 5, 4, 3, 2, 9};

    for(i=0; i<10; i++)
    {
        j=i;
        while(j > 0 && (array[j] > array[j+1]))
        {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
        
    }

    for(i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }


    return 0;
}