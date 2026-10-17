#include <locale.h>
#include <windows.h>
#include "primeNumbers.c"

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    PrimeNumbers();
    return 0;
}

