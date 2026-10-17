#include <locale.h>
#include <windows.h>
#include "countsSubstring.c"

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    CountsSubstring();
    return 0;
}

