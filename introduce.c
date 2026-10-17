#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include "luckyTickets.c"

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    LuckyTickets();
    return 0;
}

