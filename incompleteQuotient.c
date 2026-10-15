#include <stdio.h>

int IncompleteQuotient()
{
    int dividend, divisor, quotient = 0;
    printf("Введите 2 целых числа: ");
    if (scanf("%d %d", &dividend, &divisor) == 2)
    {
        int value = dividend;
        if (divisor == 0)
        {
            printf("Ошибка: деление на ноль невозможно.");
            return 1;
        }
        else if (value % divisor == 0)
        {
            printf("Частное от деления c на d равно %d, остаток равен 0\n", value / divisor);
        }
        else
        {
            for(int index = 1; index < abs(divisor); index++)
            {
                if (abs(value - index) % abs(divisor) == 0)
                {
                    value = abs(value - index);
                    while (value != 0)
                    {
                        value = value - abs(divisor);
                        if (dividend >= 0 && divisor > 0 || dividend <= 0 && divisor < 0)
                        {
                            quotient++;
                        }
                        else if (dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0)
                        {
                            quotient--;
                        }
                    }
                    printf(" Неполное частное %d, остаток %d \n", quotient, index);
                }
            }
        }
    }
    else
    {
        printf("Ошибка: введены некорректные данные.");
        return 1;
    }
    return 0;
}