#include <stdio.h>

//계수 정렬 (2023.03.05) - 크기가 한정되어 있는 데이터에 한해 굉장히 빠름
//O(N)

int main(void)
{
    int count[5] = {0,};
    int array[30] = {
        1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
        3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
        3, 1, 4, 3, 5, 1, 2, 1, 1, 1
    };

    for(int i=0; i<30; i++)
    {
        count[array[i] - 1]++;
    }

    for(int i=0; i<5; i++)
    {
        if(count[i] != 0)
        {
            for(int j=0; j<count[i]; j++)
            {
                printf("%d ", i+1);
            }
        }
    }

    return 0;
}