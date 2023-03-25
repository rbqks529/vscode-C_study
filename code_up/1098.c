#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, w, n, l, d, x, y, i, j;
    int **pptr = NULL;

    scanf("%d %d", &h, &w);

    pptr = (int **)malloc(sizeof(int *) * h+1);
    if(pptr == NULL)
    {
        printf("동적 메모리 할당 오류");
        exit(1);
    }
    for(i=0; i<h+1; i++)
    {
        *(pptr +i) = (int *)malloc(sizeof(int) * w+1);
        if(*(pptr + i) == NULL)
        {
            printf("동적 메모리 할당 오류");
            exit(1);
        }
    }
    
    for(i=1; i<h+1; i++)
    {
        for(j=1; j<w+1; j++)
        {
            *(*(pptr + i) + j) = 0;
        }
    }
    
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);       
        if(d == 0)
        {
            for(j=y; j<y+l; j++)
            {
                *(*(pptr + x) + j) = 1;
            }
        }
        else if(d == 1)
        {
            for(j=x; j<x+l; j++)
            {
                *(*(pptr + j) + y) = 1;
            }
        }
    }

    for(i=1; i<h+1; i++)
    {
        for(j=1; j<w+1; j++)
        {
            printf("%d ", *(*(pptr + i) + j));
        }
        printf("\n");
    }

    for(i=0; i<h+1; i++)
    {
        free(*(pptr + i));
    }

    return 0;
}
