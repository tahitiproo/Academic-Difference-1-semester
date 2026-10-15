int ReverseArray(int *array, int firstSectionLength, int secondSectionLength)
{
    for (int offset = 0;
        (firstSectionLength > 0) && (secondSectionLength > 0);)
    {
        if(firstSectionLength == secondSectionLength)
        {
            for(int index = 0; index < firstSectionLength; index++)
            {
                Swap(&array[index + offset], 
                    &array[index + firstSectionLength + offset]);
            }
            return 0;
        }
        else if (firstSectionLength > secondSectionLength)
        {
            for(int index = 0; index < secondSectionLength; index++)
            {
                Swap(&array[index + offset], 
                    &array[index + firstSectionLength + offset]);
            }
            firstSectionLength = firstSectionLength - 
                secondSectionLength;
            offset += secondSectionLength;
        }
        else if (firstSectionLength < secondSectionLength)
        {
           for(int index = 0; index < firstSectionLength; index ++)
            {
                Swap(&array[index + offset], 
                    &array[index + firstSectionLength + offset]);
            }
            secondSectionLength = secondSectionLength - 
                firstSectionLength;
            offset += firstSectionLength;
        }
    }
    return 0;
}