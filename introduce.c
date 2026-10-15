#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <stdbool.h>

#define MAX_THREE_DIGIT_SUM 27
#define MAX_SIZE 255
#define MAX_THREE_DIGIT 1000
// void BinaryPrint(int c){
//         int i=0;
//         short d[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//         while(c>0 && i<16)
//         {
//             d[i]=c%2;
//             c=c/2;
//             i++;
//         }
//         for(int j=i-1;j>=0;j--)
//         {
//             printf("%d",d[j]);
//             d[j] =0;
//         }
//         printf("\n");
//     }

int ZerosArray()
{
    printf("Введите количество элементов массива: ");
    short elementCount;
    short zeroCount=0;
    if (scanf("%hd",&elementCount) !=1)
    {
        printf("Ошибка: ввод некорректных данных");
        return 1;
    }
    int* array = (int*)malloc(elementCount*sizeof(int));
    if (array == NULL)
    {
        printf("Ошибка выделения памяти");
        return 1;
    }
    printf("Введите %hd элементов массива: ", elementCount);
    for(int i = 0; i<elementCount; i++)
    {
        if (scanf("%d", &array[i]) != 1)
        {
            printf("Ошибка: ввод некорректных данных");
            return 1;
        }
        if (array[i]==0)
        {
            zeroCount++;
        }
    }
    free(array);
    printf("Количество нулевых элементов в массиве: %d",zeroCount);
}
void Swap(int *first, int *second){
    *first = *first ^ *second;
    *second = *first ^ *second;
    *first = *first ^ *second;
}
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
            for(int i = 1; i < abs(divisor); i++)
            {
                if (abs(value - i) % abs(divisor) == 0)
                {
                    value = abs(value - i);
                    while (value != 0)
                    {
                        value = value - abs(divisor);
                        if (dividend >=0 && divisor > 0 || dividend <= 0 && divisor < 0)
                        {
                            quotient++;
                        }
                        else if (dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0)
                        {
                            quotient--;
                        }
                    }
                    printf(" Неполное частное %d, остаток %d \n", quotient, i);
                }
            }
        }
    }
    else
    {
        printf("Ошибка: введены некорректные данные.");
        return 1;
    }
}
int LuckyTickets()
{
    int number = 0;
    int digitSums[MAX_THREE_DIGIT_SUM + 1] = {0};
    int arraySize = sizeof(digitSums) / sizeof(digitSums[0]);
    while (number < MAX_THREE_DIGIT)
    {
        int temp = number;
        int digitSum = 0;
        while(temp > 0)
        {
            digitSum += temp % 10;
            temp = temp / 10;
        }
        digitSums[digitSum] += 1;
        digitSum = 0;
        number++;
    }
    int luckyTicketsCount = 0;
    for (int i = 0; i < arraySize; i++)
    {
        printf("Количество билетов с суммой %d:%d\n",i,digitSums[i]);
        luckyTicketsCount += pow(digitSums[i], 2);
    }
    printf("Количество счастливых билетов:%d\n",luckyTicketsCount);
}
struct Stack
{
    char data[MAX_SIZE];
    int top;
};
int Push(struct Stack *s, char value)
{
    if (s->top < MAX_SIZE - 1)
    {
        s->top++;
        s->data[s->top] = value;
        return 1;
    }
    else
    {
        printf("Стек переполнен\n");
        return 0;
    }
}
int BracketBalance()
{
    char string[255];
    int count = 0;
    bool flagBalanced[2] = {false, false};
    printf("Введите строку со скобками: ");
    scanf("%s", string);
    int length = strlen(string);
    for(int i=0; i < length; i++)
    {
        switch (string[i])
        {
            case '(':
                count++;
                if (i == length / 2 - 1 && count - 1 == i)
                {
                    flagBalanced[0] = true;
                }
                break;
            case ')':
                count--;
                if (count < 0)
                {
                    flagBalanced[1] = false;
                }
                else if (i == length - 1 && count == 0)
                {
                    flagBalanced[1] = true;
                }
                break;
        }
    }
    if (count == 0 && flagBalanced[0] == true && flagBalanced[1] == true && length % 2 == 0)
    {
        printf("Скобки расставлены верно");
    }
    else
    {
        printf("Скобки расставлены неверно");
    }
    return 0;
}
int PrimeNumbers()
{
    int upperBound;
    printf("Введите число, задающее верхнюю границу вывода\n");
    if (scanf("%d",&upperBound)!=1)
    {
        printf("Ошибка: введены некорректные данные.");
        return 1;
    }
    int number = upperBound;
    for (int number = 1, divisorCount = 0; number<=upperBound; number++)
    {   
        divisorCount = 0;
        for (int divisor = 1; divisor<=number; divisor++)
        {
            if (number % divisor == 0)
            {
                divisorCount++;
            }
        }
        if (divisorCount==2)
        {
            printf("%d - простое число\n",number);
            divisorCount = 0;
        }
    }
    return 0;
}
int CountsSubstring()
{
    char mainString[MAX_SIZE];
    char subString[MAX_SIZE];
    int mainCount = 0;
    int subCount = 0;
    printf("Введите строку S: ");
    if (scanf("%s", mainString) != 1)
    {
        printf("Ошибка: введены некорректные данные");
        return 1;
    }
    else if (strlen(mainString) > MAX_SIZE)
    {
        printf("Ошибка: введенная строка превышает допустимую длину");
        return 1;
    }
    else
    {
        printf("Введите строку S1: ");
        if (scanf("%s", subString) != 1)
        {
            printf("Ошибка: введены некорректные данные");
            return 1;
        }
        else if (strlen(subString) > MAX_SIZE)
        {
            printf("Ошибка: введенная строка превышает допустимую длину");
            return 1;
        }
        int mainLength = strlen(mainString);
        int subLength = strlen(subString);
        if (subLength == 0 || subLength > mainLength)
        {
            printf("Количество вхождений строки S1 в строку S: 0\n");
            return 0;
        }
        else
        {
            for (int begin = 0; begin <= mainLength - subLength; begin++)
            {
                bool isMatch = true;
                for (int offset = 0; offset < subLength; offset++)
                {
                    if (mainString[begin + offset] != subString[offset])
                    {
                        isMatch = false;
                        break;
                    }
                }
                if (isMatch)
                {
                    mainCount++;
                }
            } 
        }
        printf("Количество вхождений строки S1 в строку S : %d\n", mainCount);
        return 0;
    }
}
int ReverseArray(int *array, int firstSectionLength, int secondSectionLength)
{
    for (int offset = 0;(firstSectionLength > 0) && (secondSectionLength > 0);)
    {
        if(firstSectionLength == secondSectionLength)
        {
            for(int index = 0; index < firstSectionLength; index++)
            {
                Swap(&array[index + offset],&array[index + firstSectionLength + offset]);
                secondSectionLength--;
            }
        }
        else if (firstSectionLength > secondSectionLength)
        {
            for(int index =0; index < secondSectionLength; index++)
            {
                Swap(&array[index + offset],&array[index + firstSectionLength + offset]);
            }
            firstSectionLength = firstSectionLength - secondSectionLength;
            offset += secondSectionLength;
        }
        else if (firstSectionLength < secondSectionLength)
        {
           for(int index = 0; index < firstSectionLength; index ++)
            {
                Swap(&array[index + offset],&array[index + firstSectionLength + offset]);
            }
            secondSectionLength = secondSectionLength - firstSectionLength;
            offset += firstSectionLength;
        }
    }
    return 0;
}
int HalfArray()
{
    int m,n,k;
    printf("Введите размерности двух отрезков массива через пробел: ");
    if (scanf("%d %d", &m, &n) !=2)
    {
        printf("Ошибка: введены некорректные данные.");
        return 1;
    }
    int *array = malloc((m+n) * sizeof(int));
    if (array == NULL)
    {
        printf("Не удалось выделить память");
        return 1;
    }
    printf("Введите элементы массива через enter\n");
    for (int i=0; i<m+n; i++)
    {
        if (scanf("%d", &array[i]) != 1)
        {
            printf("Ошибка: введены некорректные данные.");
            free(array);
            return 1;
        }
    }
    ReverseArray(array, m, n);

    for (int i=0; i<m+n; i++)
    {
        printf("%d", array[i]);
    }
    free(array);
    return 0;
}
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //HalfArray();
    //SwappingTheEndsArray();
    

    CountsSubstring();
    //PrimeNumbers();
    //BracketBalance();
    //LuckyTickets();
    //IncompleteQuotient();
    //ZerosArray();
    return 0;

    
    // char *locale = setlocale(LC_ALL, "");
    // int a,b;
    // printf("Введите 2 целых числа: ");
    // if (scanf("%d %d", &a, &b)==2)
    // {
    //     printf(" a & b:%d %d\n",a,b);
    //     Swap(&a, &b);
    //     printf(" a & b:%d %d\n",a,b);
    // }
    // else
    // {
    //     printf("Ошибка ввода");
    //     return 1;
    // }


    // int array_bubble[9] = {9, 0, 5, 7, 3, 8, 2, 4, 6};
    // int temp;
    // short count = sizeof(array_bubble)/ sizeof(array_bubble[0]);
    // for(short m = 0; m<count; m++)
    // {
    //     for(short l = 0; l<count; l++)
    //     {
    //         if (array_bubble[l]>array_bubble[l+1]){
    //             temp = array_bubble[l+1];
    //             array_bubble[l+1] = array_bubble[l];
    //             array_bubble[l] = temp; 
    //         }
    //         printf("%d ",array_bubble[l]);
    //     }
    //     printf("\n");
    // }
}

