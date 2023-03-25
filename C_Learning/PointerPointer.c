#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int *p;
    p = (int *)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    int **pp = &p;
    *p = 10;

    printf("p    : %d\n", p);
    printf("&p   : %d\n", &p);
    printf("*p   : %d\n", *p);
    printf("pp   : %d\n", pp);
    printf("&pp  : %d\n", &pp);
    printf("*pp  : %d\n", *pp);
    printf("**pp : %d\n", **pp);


    free(p);

    return 0;
}