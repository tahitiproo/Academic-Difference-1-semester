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
void Swap(int *a, int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
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
int main(void)
{
    printf("Hello, World!\n");
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

    ZerosArray();

    return 0;
    // char name[10];
    // printf("Say my name:\n");
    // scanf("%10s[^/n]", name);
    // if (!strcmp(name,"Heisenberg")){
    //     printf("You`re god damn right\n");
    // }

    // int dec, hex, oct;

    // dec = 100;
    // hex = 0x1FA;
    // oct = 0123;

    // char symbol;
    // symbol = 'B';

    
    // printf("Integer: %d\n", max);
    // // printf("чубапепе");

    // int i = 2, j, n = 4;
    // static int x[8];
    // for(; i<n; i++){
    //     x[i] = n;
    //     printf("%d\n", x[i]);
    // }
    // for(int count = 0; count<(sizeof(x)/sizeof(x[0])); count++){
    //     printf("Integer number: %d\n", x[count]);
    // }
    // double float_num[] = {5.52f, 6.2565f, 2542513.5245f, 9543759.59245f};
    // for(int k = 0; k<4; k++){
    //     printf("float number: %f\n", float_num[k]);
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

    // char message[] = {'H','e','l','l','o'};
    // printf("Сообщение: %s \n", message);
    // for (int n = 0; n<(sizeof(message)/sizeof(message[0])); n++){
    //     printf("%d ",message[n]);
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