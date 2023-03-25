#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *data = NULL;
    
    data = (char *)malloc(sizeof(char) * 2000);
    if(data == NULL)
    {
        printf("동적 메모리 할당 오류");
        exit(1);
    }

    fgets(data, 2000, stdin);
    printf("%s\n", data);

    free(data);
    data = NULL;

    return 0;
}