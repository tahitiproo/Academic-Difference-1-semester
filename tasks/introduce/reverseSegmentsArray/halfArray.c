#include <stdio.h>
#include <stdlib.h>
#include "reverseArray.h"


int HalfArray()
{
    int firstSectionLength, secondSectionLength;
    printf("Ââåäèòå ðàçìåðíîñòè äâóõ îòðåçêîâ ìàññèâà ÷åðåç ïðîáåë: ");
    if (scanf("%d %d", &firstSectionLength, &secondSectionLength) != 2)
    {
        printf("Îøèáêà: ââåäåíû íåêîððåêòíûå äàííûå.");
        return 1;
    }
    int *array = malloc((firstSectionLength + secondSectionLength) 
        * sizeof(int));
    if (array == NULL)
    {
        printf("Íå óäàëîñü âûäåëèòü ïàìÿòü");
        return 1;
    }
    printf("Ââåäèòå ýëåìåíòû ìàññèâà ÷åðåç enter\n");
    for (int i=0; i < firstSectionLength + secondSectionLength; i++)
    {
        if (scanf("%d", &array[i]) != 1)
        {
            printf("Îøèáêà: ââåäåíû íåêîððåêòíûå äàííûå.");
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