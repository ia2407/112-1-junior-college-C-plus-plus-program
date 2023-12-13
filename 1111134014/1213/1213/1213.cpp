#include <stdio.h>
#define SIZE 10

void bubble(int array[SIZE][4]);//原型宣告
void swap(int* a, int* b);//原型宣告

int main(void)
{
    // 宣告變數二微陣列 a
    int a[SIZE][4] = { {1,95,45,0},{2,94,84,0},{3,68,46,0},
        {4,57,89,0},{5,32,66,0},{6,52,74,0},{7,52,45,0},
        {8,52,21,0},{9,52,85,0},{10,78,95,0}};

    for (size_t i = 0; i < SIZE; ++i) {//計算平均
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }

    printf("\n%4s %4s %4s %4s","學號","數學","計概","平均");//輸出字串

    bubble(a);//呼叫副程式
   
    for (size_t i = 0; i < SIZE; ++i) {//列印副程式排列結果
        printf("\n%4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);//輸出 4個空格 整數型態
    }
    puts("");//推空格(更美觀)

}

//  & 取得變數的記憶體位址
//  * 取得記憶體位址的內容

void bubble(int array[SIZE][4])//副程式(將a陣列引入變成array) 陣列為10列 4行
{
    unsigned int pass;

    for (unsigned int pass = 1; pass < SIZE; ++pass) {//迴圈的經歷次數  重複9次 排序

        for (size_t i = 0; i < SIZE - 1; ++i) {//迴圈比較次數 

            if (array[i][3] < array[i + 1][3]) {//如果 array[i][3](平均值) < array[i + 1][3](下一個位置的平均值)
                swap(&array[i][0], &array[i + 1][0]);//交換兩個的學號 //引進到副程式swap (&array[i][0] = a ,  &array[i + 1][0] = b)
                swap(&array[i][1], &array[i + 1][1]);//交換兩個的數學成績
                swap(&array[i][2], &array[i + 1][2]);//交換兩個的計概成績
                swap(&array[i][3], &array[i + 1][3]);//交換兩個的平均值

                //for (size_t i = 0; i < SIZE - 1; ++i) {

                //if (array[i] [3]< array[i + 1][3]) {
                   // int hold = array[i][0];
                   // array[i][0] = array[i + 1][0];
                   // array[i + 1][0] = hold;

                   // hold = array[i][1];
                   // array[i][1] = array[i + 1][1];
                    //array[i + 1][1] = hold;

                    //hold = array[i][2];
                   // array[i][2] = array[i + 1][2];
                   // array[i + 1][2] = hold;

                   // hold = array[i][3];
                  //  array[i][3] = array[i + 1][3];
                   // array[i + 1][3] = hold;


            }
        }
    }
}
void swap(int* a, int* b) {//副程式  取得a b 的內容 執行
    int temp;//建立變數
    temp = *a;//交換變數值
    *a = *b;
    *b = temp;

}