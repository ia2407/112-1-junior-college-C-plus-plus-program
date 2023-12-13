#include <stdio.h>
#define SIZE 10
void swap(int* a, int* b);
void bubble(int array[][4]);//只要標出總共幾行
int main(void)
{
    int a[SIZE][4] = {{1,98,72,0},{2,98,65,0},{3,98,78,0},{4,98,35,0},{5,98,96,0},{6,98,45,0},{7,98,60,0},{8,98,75,0},{9,98,32,0},{10,98,71,0}};

    //算平均
    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }
    //叫副程式
    bubble(a);
    //標題
    printf("\n%4s %4s %4s %4s ", "學號", "數學", "計概", "平均");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n%4d %4d %4d %4d ", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])
{
    unsigned int pass;
                
    for (unsigned int pass = 1; pass < SIZE; ++pass) {//循環比較9次
  
        for (size_t i = 0; i < SIZE - 1; ++i) {
          
            if (array[i][3] < array[i + 1][3]) {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3]);
                /*int hold = array[i][0];
                array[i][0] = array[i + 1][0];
                array[i + 1][0] = hold;

                hold = array[i][1];
                array[i][1] = array[i + 1][1];
                array[i + 1][1] = hold;

                hold = array[i][2];
                array[i][2] = array[i + 1][2];
                array[i + 1][2] = hold;

                hold = array[i][3];
                array[i][3] = array[i + 1][3];
                array[i + 1][3] = hold;*/
            }
        }
    }
}

void swap(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}