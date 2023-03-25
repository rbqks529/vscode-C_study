#include <stdio.h>

char *newGreet = "Hello";

void change_greet(char **q)
{
    printf("q = %s \n", *q);
    *q = newGreet;
    printf("q = %s \n", *q);
}

int main(void)
{
    char *greet = "GoodBye";
    printf("greet = %s \n", greet);
    
    change_greet(&greet);
    printf("greet = %s\n", greet);

    return 0;
}