#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, n, sum, count;
    scanf("%d", &number);

    for(int i=0; i<number; i++)
    {
        sum = 0;
        count = 0;
        scanf("%d", &n);
        int *arr = (int *)malloc(sizeof(int) * n);
        if(arr == NULL)
        {
            printf("동적메모리 할당 오류");
            exit(1);
        }
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for(int j=0; j<n; j++)
        {
            sum += arr[j];
        }
        sum = sum / n;

        for(int j=0; j<n; j++)
        {
            if(arr[j] > sum)
            {
                count++;
            }
        }
        printf("%.3f%%\n", ((double)count/(double)n) * 100);

        free(arr);
    }

    return 0;
}