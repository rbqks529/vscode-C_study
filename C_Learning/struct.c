#include <stdio.h>

struct Point{
    int x;
    int y;
};
struct Player{
    char *name;
    int level;
    double hp;
    struct Point position;
};

void print_point(struct Point x)
{
    printf("print (%d %d)\n", x.x, x.y);
}

int main(void)
{
    struct Point Player = {10, 10};
    struct Point Monster = {0, 10};
    

    print_point(Player);
    print_point(Monster);


    return 0;
}