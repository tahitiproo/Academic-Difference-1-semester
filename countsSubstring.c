#include <stdio.h>

#define MAX_SIZE 255

int CountsSubstring()
{
    char mainString[MAX_SIZE];
    char subString[MAX_SIZE];
    int mainCount = 0;
    int subCount = 0;
    printf("Введите строку S: ");
    if (scanf("%254s", mainString) != 1)
    {
        printf("Ошибка: введены некорректные данные");
        return 1;
    }
    else
    {
        printf("Введите строку S1: ");
        if (scanf("%254s", subString) != 1)
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