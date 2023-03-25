#include<stdio.h>
#include<string.h>

int main()
{
	int count = 0;
	char s[1000005];
	fgets(s, sizeof(s), stdin);
	
    if(s[0] != ' ')
    {
        count++;
    }
	
	for(int i=0; i<strlen(s)-2; i++)
	{
		if(s[i] == ' ')
			count++;
	}

	printf("%d", count);
	
	return 0;
}