#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include "swap.c"

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    printf("Введите два целых числа через пробел: ");
    int firstInteger, secondInteger;
    if (scanf("%d %d", &firstInteger, &secondInteger) != 2)
    {
        printf("Ошибка: введены некорректные данные");
        return 1;
    }
    Swap(&firstInteger,&secondInteger);
    printf("После обмена: %d %d\n", firstInteger, secondInteger);
    return 0;
}

