#include <stdio.h>

int count[10001];

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        count[x]++;
    }


    for(int i=0; i<10001; i++)
    {
        if(count[i] != 0)
        {
            for(int j=0; j<count[i]; j++)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}