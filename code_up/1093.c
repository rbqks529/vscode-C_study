#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count, number, i;
    int *arrp;
    int arr[23] = {0,};
    
    scanf("%d", &count);
    arrp = (int *)malloc(sizeof(int) * count);
    if(arrp == NULL)
    {
        printf("동적메모리 할당 오류\n");
        exit(1);
    }
    
    for(i=0; i<count; i++)
    {
        scanf("%d", &arrp[i]);
    }
    for(i=0; i<count; i++)
    {
        number = arrp[i];
        arr[number-1]++; 
    }
    for(i=0; i<23; i++)
    {
        printf("%d ", arr[i]);
    }
    
    free(arrp);
    arrp = NULL;

    return 0;
}