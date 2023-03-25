#include<stdio.h>

int main(void)
{
    int n, m;
    int begin, end, mid;
    int array[105] = {0, };
    int copy[105] = {0,};

    scanf("%d %d", &n, &m);

    for(int i=1; i<=n; i++)
    {
        array[i] = i;
    }

    for(int i=0; i<m; i++)
    {
        scanf("%d %d %d", &begin, &end, &mid);
        int temp = 0;
        int count = begin;
        
        for(int j=mid; j<=end; j++)
        {
            copy[count] = array[j];
            count++;
        }
        
        for(int j=begin; j<mid; j++)
        {
            copy[count] = array[j];
            count++;
        }

        for(int j=begin; j<=end; j++)
        {
            array[j] = copy[j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}