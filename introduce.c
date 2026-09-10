#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
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
    short c,d;
    d=0;
    scanf("%hd",&c);
    printf("%hd",c);
    int* array = (int*)malloc(c*sizeof(int));
    if (array == NULL)
    {
        printf("Ошибка выделения памяти");
        return 1;
    }
    printf("Введите %hd элементов массива: ", c);
    for(int i = 0; i<c; i++)
    {
        scanf("%d", &array[i]);
        if (array[i]==0)
        {
            d++;
        }
    }
    if (sizeof(array)/sizeof(array[0])==c)
    {
        printf("Количество нулевых элементов в массиве: %d",d);
    }
    else
    {
        printf("Ошибка: количество введенных элементов не соответствует указанному размеру массива.");
        return 1;
    }
    free(array);
}
void Swap(int *a, int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int IncompleteQuotient()
{
    int c,e,d,q = 0;
    printf("Введите 2 целых числа: ");
    if (scanf("%d %d", &e, &d)==2)
    {
        c=e;
        if (d==0)
        {
            printf("Ошибка: деление на ноль невозможно.");
            return 1;
        }
        else if (c%d==0)
        {
            printf("Частное от деления c на d равно %d, остаток равен 0\n", c/d);
        }
        else
        {
            for(int i=1; i<abs(d); i++)
            {
                if (abs(c-i)%abs(d)==0)
                {
                    c = abs(c-i);
                    while (c!=0)
                    {
                        c = c-abs(d);
                        if (e>=0 && d>0 || e<=0 && d<0)
                        {
                            q++;
                        }
                        else if (e<0 && d>0 || e>0 && d<0)
                        {
                            q--;
                        }
                    }
                    printf(" Неполное частное %d, остаток %d \n", q, i);
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
int main(void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a;
    int b=0;
    int c=0;
    int array[28] = {0};
    int size = sizeof(array)/sizeof(array[0]);
    while (c<pow(10, 3))
    {
        a=c;
        while(a>0)
        {
            b += a%10;
            a = a/10;
        }
        array[b] += 1;
        b=0;
        c++;
    }
    c=0;
    for (int i=0; i<size; i++)
    {
        printf("Количество билетов с суммой %d:%d\n",i,array[i]);
        c += pow(array[i], 2);
    }
    printf("Количество счастливых билетов:%d\n",c);
    //IncompleteQuotient();
    //ZerosArray();

    
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
    

    return 0;


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

    
    // }
    // int var, size;
    // var = 10;
    // size = 100;
    // int *const pvar = &var;
    // int *const psize = &size;
    // printf("var is %d \n", var);
    // printf("size is %d \n", size);
    // size = *(&size - 1);
    // printf("var = %d \n", var);
    // printf("size = %d \n", size);
    

}