#include <stdio.h>

int main(void)
{
    int i, j;
    int map[11][11];

    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            scanf("%d ", &map[i][j]);
        }
    }

    j = 2;
    for(i=2; i<=10; i++)
    {
        if(map[i][j] == 0)
        {
            map[i][j] = 9;
            j++;
            i--;
        }
        else if(map[i][j] == 1)
        {
            j--;
        }
        else if(map[i][j] == 2)
        {
            map[i][j] = 9;
            break;
        }  
    }


    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }    

    return 0;
}