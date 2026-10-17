#include <locale.h>
#include <windows.h>

#include "zerosArray.c"

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    ZerosArray();
    return 0;
}

