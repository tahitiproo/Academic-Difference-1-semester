#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
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

void ZerosArray()
{
printf("Введите количество элементов в массиве ");
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
    printf("Введите %hd элементов массива через пробел: ", c);
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
        printf("У введённого массива %d нулей",d);
    }
    else
    {
        printf("Ошибка ввода");
        return 1;
    }
    free(array);
}
void Swap(int *a, int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main(void)
{
    printf("Hello, World!\n");

    ZerosArray();

    
    char *locale = setlocale(LC_ALL, "");
    int a,b;
    printf("Введите 2 целочисленные переменные через пробел: ");
    if (scanf("%d %d", &a, &b)==2)
    {
        printf(" a & b:%d %d\n",a,b);
        Swap(&a, &b);
        printf(" a & b:%d %d\n",a,b);
    }
    else
    {
        printf("Ошибка ввода");
        return 1;
    }

    

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