#include<stdio.h>
#include<string.h>

int main(void)
{
    int count[26] = {0, };
    int max = 0;
    int key;
    char arr[1000005];
    
    scanf("%s", arr);

    for(int i=0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            count[arr[i]-65]++;
        }
        else
        {
            count[arr[i]-97]++;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(max < count[i])
        {
            max = count[i];
            key = i;
        }
    }
    
    int a = 0;
    for(int i=0; i<26; i++)
    {
        if(max == count[i] && key != i)
        {
            a = 1;
        }      
    }

    if(a == 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", key+65);
    }

    return 0;
}