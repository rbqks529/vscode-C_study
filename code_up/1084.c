#include <stdio.h>

int main(void)
{
    int r, g, b;
    int i, j, k;
    int count = 0;

    scanf("%d %d %d", &r, &g, &b);

    for(i=0; i<r; i++)
    {
        for(j=0; j<g; j++)
        {
            for(k=0; k<b; k++)
            {
                printf("%d %d %d", i, j, k);
                count++;
                printf("\n");
            }            
        }        
    }
    printf("%d", count);

    return 0;
}