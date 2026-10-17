#include <stdio.h>

#include <locale.h>
#include <windows.h>
#include "incompleteQuotient.c"

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    IncompleteQuotient();
    return 0;
}

