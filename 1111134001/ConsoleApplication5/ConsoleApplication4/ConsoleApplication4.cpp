#include <stdio.h>
#define SIZE 10

void bubble(int array[][4]);//宣告
void swap(int* a, int* b);//宣告
int main(void)//主程式
{
    int a[SIZE][4] = { { 1,77,72,0 } , { 2,62,72,0 }, { 3,85,72,0 },//陣列
    { 4,98,92,0 }, { 5,98,99,0 }, { 6,98,60,0 }, { 7,98,70,0 },
    { 8,98,87,0 }, { 9,98,89,0 }, { 10,98,23,0 } };
    puts("Data items in original order");
    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[1][2]) / 2;
    }
    bubble(a);
    puts("\nData items in ascending order");

    printf("\n%4s %4s %4s %4s", "學號"," 數學成績", "計概", "平均成績");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n%4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])//副程式
{
    unsigned int pass;
           
    for (unsigned int pass = 1; pass < SIZE; ++pass) {


        for (size_t i = 0; i < SIZE - 1; ++i) {  
            if (array[i][3] < array[i + 1][3]) {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3]);
            //int hold = array[i][0];
            // array[i][0] = array[i + 1][0];
            //array[i + 1] [0]= hold;
            // hold = array[i][1];
            // array[i][1] = array[i + 1][1];
            // array[i + 1][1] = hold;
            // hold = array[i][2];
            // array[i][2] = array[i + 1][2];
            // array[i + 1][2] = hold;
            // hold = array[i][3];
            // array[i][3] = array[i + 1][3];
            //array[i + 1][3] = hold;
            }
        }
    }
}

void swap(int* a, int* b)//副程式(指標)
{
    int temp = *a ;
    *a = *b;
    *b = temp;
}