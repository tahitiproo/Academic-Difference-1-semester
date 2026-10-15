#include <stdio.h>

#define MAX_THREE_DIGIT_SUM 27
#define MAX_THREE_DIGIT 1000

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
        number++;
    }
    int luckyTicketsCount = 0;
    for (int i = 0; i < arraySize; i++)
    {
        printf("Количество билетов с суммой %d:%d\n", i, digitSums[i]);
        luckyTicketsCount += digitSums[i] * digitSums[i];
    }
    printf("Количество счастливых билетов:%d\n",luckyTicketsCount);
    return 0;
}