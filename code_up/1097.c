#include <stdio.h>

int main(void)
{
    int n, i, j, x, y, a;
    int arr[20][20] = {0,};

    for(i=1; i<=19; i++)
    {
        for(j=1; j<=19; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        for(a=1; a<=19; a++)
        {
            if(arr[x][a] == 0)
            {
                arr[x][a] = 1;
            }
            else if (arr[x][a] == 1)
            {
                arr[x][a] = 0;
            }
            if(arr[a][y] == 0)
            {
                arr[a][y] = 1;
            }
            else if (arr[a][y] == 1)
            {
                arr[a][y] = 0;
            }
            
        }
    }

    for(i=1; i<=19; i++)
    {
        for(j=1; j<=19; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}