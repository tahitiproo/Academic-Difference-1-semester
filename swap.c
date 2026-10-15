void Swap(int *first, int *second)
{
    *first = *first ^ *second;
    *second = *first ^ *second;
    *first = *first ^ *second;
}