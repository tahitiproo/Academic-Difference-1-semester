#include <stdio.h>

int PrimeNumbers()
{
    int upperBound;
    printf("¬ведите число, задающее верхнюю границу вывода\n");
    if (scanf("%d", &upperBound) != 1)
    {
        printf("ќшибка: введены некорректные данные.");
        return 1;
    }
    for (int number = 1, divisorCount = 0; number <= upperBound; number++)
    {   
        divisorCount = 0;
        for (int divisor = 1; divisor <= number; divisor++)
        {
            if (number % divisor == 0)
            {
                divisorCount++;
            }
        }
        if (divisorCount == 2)
        {
            printf("%d - простое число\n", number);
        }
    }
    return 0;
}