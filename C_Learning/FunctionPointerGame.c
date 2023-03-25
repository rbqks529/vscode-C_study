#include <stdio.h>

void display_menu(void);
void display_credit(void);

int input_menu(void);
int input_credit(void);

void update_menu(int);
void update_credit(int);

void (*display)(void) = display_menu;
int (*input)(void) = input_menu;
void (*update)(int) = update_menu;
int is_terminate = 0;

int main(void)
{
    while (is_terminate != 1)
    {
        int key = 0;
    
        display();
        key = input();
        update(key);
    }


    return 0;
}

void display_menu(void)
{
    printf("0. ����\n" "1. ũ����\n" "2. ����\n");
}
void display_credit(void)
{
    printf("������ : ���Ժ�\n" "������ : 20230228\n");

}

int input_menu(void)
{
    int key = 0;
    scanf("%d", &key);

    return key;
}
int input_credit(void)
{
    return 0;
}

void update_menu(int select)
{
    if (select == 0)
    {

    } 
    else if (select == 1) 
    {
        display = display_credit;
        update = update_credit;
        input = input_credit;
    }
    else if (select == 2)
    {
        is_terminate = 1;
    }
}
void update_credit(int select)
{
    display = display_menu;
    update = update_menu;
    input = input_menu;
}