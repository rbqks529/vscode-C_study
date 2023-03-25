#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[105];
    int length;
    
    scanf("%s", arr);
    length = strlen(arr);
    int start = 0, end = length-1, key;

    while(1)
    {
        if(start == end || start >= end)
        {
            break;
        }

        if(arr[start] == arr[end])
        {
            key = 1;
            start++;
            end--;
        }
        else
        {
            key = 0;
            break;
        }
    }

    printf("%d", key);

    return 0;
}