#include<stdio.h>

int main(void)
{
    int cas, num, count = 0;
    char arr[21];
    scanf("%d", &cas);

    for(int i=0; i<cas; i++)
    {
        scanf("%d ", &num);
        scanf("%s", arr);

        for(int j=0; arr[j]!='\0'; j++)
        {
            for(int k=0; k<num; k++)
            {
                printf("%c", arr[j]);
            }
        }
        printf("\n");
    }


    return 0;
}