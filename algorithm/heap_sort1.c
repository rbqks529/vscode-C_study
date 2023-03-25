#include <stdio.h>
//힙생성: 하향식
int number;
int heap[1000001];

int main(void)
{
    scanf("%d", &number);

    for(int i=0; i<number; i++)
    {
        scanf("%d", &heap[i]);
    }

    for(int i = number/2-1; i>=0; i--)
    {
        int root = i;
        int c = 1;        
        do
        {
            c = 2 * root + 1;
            if(heap[c] < heap[c+1] && c < number-1)
            {
                c++;
            }
            if(heap[root] < heap[c])
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        } while (c <= number/2);
        
    }

    for(int i=number-1; i>=0; i--)
    {
        for(int j=0; j<number; j++)    
        {    
            printf("%d ", heap[j]);
        }    
        printf("\n");    
            
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        int root = 0;
        int c = 1;

        do
        {
            c = 2 * root + 1;
            if(heap[c] < heap[c+1] && c < i-1)
            {
                c++;
            }

            if(heap[root] < heap[c] && c<i)
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        } while (c < i);
        
    }

    return 0;
}