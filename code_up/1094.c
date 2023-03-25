#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    int *arrp;
    scanf("%d", &n);

    arrp = (int *)malloc(sizeof(int)*n);
    if(arrp == NULL)
    {
        printf("동적메모리 할당 오류\n");
        exit(1);
    }

    for(i=0; i<n; i++)
    {
        scanf("%d", arrp+i);
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", *(arrp+i));
    }

    free(arrp);
    arrp = NULL;

    return 0;
}