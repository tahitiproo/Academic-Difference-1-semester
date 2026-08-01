#include <stdio.h>
#include <string.h>
void BinaryPrint(int c){
        int i=0;
        short d[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        while(c>0 && i<16)
        {
            d[i]=c%2;
            c=c/2;
            i++;
        }
        for(int j=i-1;j>=0;j--)
        {
            printf("%d",d[j]);
            d[j] =0;
        }
        printf("\n");
    }
int main(void)
{
    printf("Hello, World!\n");
    

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

    int array_bubble[9] = {9, 0, 5, 7, 3, 8, 2, 4, 6};
    int temp;
    short count = sizeof(array_bubble)/ sizeof(array_bubble[0]);
    for(short m = 0; m<count; m++)
    {
        for(short l = 0; l<count; l++)
        {
            if (array_bubble[l]>array_bubble[l+1]){
                temp = array_bubble[l+1];
                array_bubble[l+1] = array_bubble[l];
                array_bubble[l] = temp; 
            }
            printf("%d ",array_bubble[l]);
        }
        printf("\n");
    }

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

    int a,b,c;
    printf("Введите через пробел: ");
    scanf("%d %d", &a, &b);
    printf(" a & b:%d %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf(" a & b:%d %d\n",a,b);
    return 0;

}