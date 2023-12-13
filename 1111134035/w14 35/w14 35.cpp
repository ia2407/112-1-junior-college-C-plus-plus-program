#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[SIZE][4]);
void swap(int* a, int* b);

int main(void)
{

    int a[SIZE][4] = { { 1,80,60,0 },{2,83,75,0},{3,33,65,0},{4,50,74,0},{5,12,45,0},{6,54,70,0},{7,93,99,0},{8,77,88,0},{9,66,55,0},{10,13,25,0} };

    for (int i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }

    bubble(a);

    printf("%4s %4s %4s %4s\n", "學號", "數學", "計概", "平均");

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void bubble(int array[SIZE][4])
{
    for (int pass = 1; pass < 10; ++pass) {

        for (int i = 0; i < 10 - 1; ++i) {

            if (array[i][3] < array[i + 1][3]) {
                swap(&array[i][3], &array[i + 1][3]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][0], &array[i + 1][0]);
            }
        }
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    temp = *b;
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
