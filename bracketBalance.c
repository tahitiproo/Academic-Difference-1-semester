#include <stdio.h>
#include <string.h>

int BracketBalance()
{
    char string[MAX_SIZE];
    int count = 0;
    bool flagBalanced[2] = {false, false};
    printf("Введите строку со скобками: ");
    scanf("%s", string);
    int length = strlen(string);
    for(int index = 0; index < length; index++)
    {
        switch (string[index])
        {
            case '(':
                count++;
                if (index == length / 2 - 1 && count - 1 == index)
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
                else if (index == length - 1 && count == 0)
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