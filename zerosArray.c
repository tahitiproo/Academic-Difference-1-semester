#include <stdio.h>

int ZerosArray()
{
    printf("Введите количество элементов массива: ");
    short elementCount;
    short zeroCount = 0;
    if (scanf("%hd", &elementCount) != 1)
    {
        printf("Ошибка: ввод некорректных данных");
        return 1;
    }
    int* array = (int*)malloc(elementCount * sizeof(int));
    if (array == NULL)
    {
        printf("Ошибка выделения памяти");
        return 1;
    }
    printf("Введите %hd элементов массива через Enter: ", elementCount);
    for(int index = 0; index < elementCount; index++)
    {
        if (scanf("%d", &array[index]) != 1)
        {
            printf("Ошибка: ввод некорректных данных");
            free(array);
            return 1;
        }
        if (array[index] == 0)
        {
            zeroCount++;
        }
    }
    free(array);
    printf("Количество нулевых элементов в массиве: %d", zeroCount);
    return 0;
}