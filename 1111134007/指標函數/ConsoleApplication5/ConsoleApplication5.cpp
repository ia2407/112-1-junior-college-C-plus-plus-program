// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <string.h>
#define SIZE 10   //學生人數
#define EXAM 4      //每個學生的資料、成績

// function main begins program execution
void bubble(int array[][EXAM], const char* name[SIZE], int(*fptr)(int a, int b));//函數宣告, const變數指標 ,char=字串, ()()=函數指標
int INC(int a, int b); //遞增宣告
int DEC(int a, int b);//遞減宣告
void swap(int* d1ptr, int* d2ptr); //swap宣告
int main(void)
{
    
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0}, //儲存學生成績二維陣列
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };

    int i, chose = 0;
   
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order"); //儲存姓名二維陣列

    for (i = 0; i < SIZE; ++i) {//計算平均
        studentGrade[i][3] = (studentGrade[i][1] + studentGrade[i][2]) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg"); //印出字串

    for (i = 0; i < SIZE; ++i) { //原始資料
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    printf("\n請告訴我您要遞增(1)還是遞減(2)排序?");
    scanf_s("%d", &chose);
    if (chose == 1) //輸入1遞增
        bubble(studentGrade, name, INC); //INC,DEC確定指標
    else if (chose == 2) //輸入2遞減
        bubble(studentGrade, name, DEC);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) { //比大小的資料
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    puts("");
}

int INC(int a, int b) //定義遞增
{
    return a > b;
}
int DEC(int a, int b) //定義遞減
{
    return a < b;
}
void bubble(int array[][EXAM], const char* name[SIZE], int(*fptr)(int a, int b))
{
    const char* temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if ((*fptr)(array[i][3], array[i + 1][3])) {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3]);
                temp = name[i];
                name[i] = name[i + 1];
                name[i + 1] = temp;
            }
        }
    }
}
void swap(int* d1ptr, int* d2ptr)
{
    int hold = *d1ptr;
    *d1ptr = *d2ptr;
    *d2ptr = hold;
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
