#include <locale.h>
#include <windows.h>
#include "bracketBalance.c"

#define MAX_THREE_DIGIT_SUM 27
#define MAX_THREE_DIGIT 1000

int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    BracketBalance();
    return 0;
}

