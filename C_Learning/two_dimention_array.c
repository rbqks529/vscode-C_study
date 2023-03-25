#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j;
    int **arrp = NULL;
    
    arrp = (int **)malloc(sizeof(int *) * n);
    for(i=0; i<n; i++)
    {
        *(arrp +i) = (int *)malloc(sizeof(int) * n);
        if(*(arrp + i) == NULL)
        {
            printf("동적메모리 할당 오류\n");
            exit(1);
        }
    }

    


    
    for(i=0; i<n; i++)
    {
        free(*(arrp + i));
    }

    return 0;
}