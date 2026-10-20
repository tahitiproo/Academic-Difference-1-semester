#include <stdio.h>
#include <stdlib.h>
#include "reverseArray.h"


int HalfArray()
{
    int firstSectionLength, secondSectionLength;
    printf("Введите размерности двух отрезков массива через пробел: ");
    if (scanf("%d %d", &firstSectionLength, &secondSectionLength) !=2)
    {
        printf("Ошибка: введены некорректные данные.");
        return 1;
    }
    int *array = malloc((firstSectionLength + secondSectionLength) 
        * sizeof(int));
    if (array == NULL)
    {
        printf("Не удалось выделить память");
        return 1;
    }
    printf("Введите элементы массива через enter\n");
    for (int i=0; i < firstSectionLength + secondSectionLength; i++)
    {
        if (scanf("%d", &array[i]) != 1)
        {
            printf("Ошибка: введены некорректные данные.");
            free(array);
            return 1;
        }
    }
    ReverseArray(array, firstSectionLength, secondSectionLength);

    for (int index = 0; index < firstSectionLength + secondSectionLength; index++)
    {
        printf("%d ", array[index]);
    }
    free(array);
    return 0;
}