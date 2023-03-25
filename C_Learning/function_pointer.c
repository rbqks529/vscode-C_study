#include <stdio.h>

void print_draw(void);
void print_1p_win(void);
void print_2p_win(void);

int main(void)
{
    int p1 = 0, p2 = 0;
    int sub = 0;
    void (*print[5])(void) = {print_1p_win, print_2p_win, print_draw, print_1p_win, print_2p_win};
    printf("����������\n");
    printf("���� :0, ���� :1, �� :2\n");

    printf("1p : ");
    scanf("%d", &p1);
    printf("2p : ");
    scanf("%d", &p2);

    sub = p1 - p2;

    /*
    if(sub==1 || sub==-2)
    {
        print = print_1p_win;
    }
    else if(sub==0)
    {
        print = print_draw;
    }
    else if(sub == -1 || sub ==2)
    {
        print = print_2p_win;
    }
    */

    print[sub+2]();

    return 0;
}

void print_draw(void)
{
    printf("���.\n");
}
void print_1p_win(void)
{
    printf("1p�̱�.\n");
}
void print_2p_win(void)
{
    printf("2p�̱�.\n");
}