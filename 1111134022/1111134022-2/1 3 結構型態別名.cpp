﻿// w17 35.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
typedef struct {
    //結構定義
    char name[20];
    int ID, math, compu;
    float avg;
} student;
// function main begins program execution
void bubble(student myStu[SIZE]);

int main(void)
{
    int i;
    char inputname[20];
    student  myStu[SIZE], tempStu, * prtstu;  //結構宣告
    // initialize a
    prtstu = myStu;
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array

    for (i = 0; i < SIZE; ++i) {          //結構存入資料
        printf("\n請輸入%d學生資料", i);
        printf("\n請輸入學生姓名");
        scanf_s("%s", inputname, 20);
        strcpy_s(myStu[i].name, inputname);
        printf("\n請輸入學生學號");
        scanf_s("%d", &myStu[i].ID);
        printf("\n請輸入學生數學成績");
        scanf_s("%d", &myStu[i].math);
        printf("\n請輸入學生計概成績");
        scanf_s("%d", &myStu[i].compu);
        myStu[i].math = studentGrade[i][1];
        myStu[i].compu = studentGrade[i][2];
        myStu[i].avg = ((float)myStu[i].math + myStu[i].compu) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {    //印出結構內容
        printf("%10s  %5d %5d %5d %5f", myStu[i].name, myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(myStu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5f", myStu[i].name, myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    puts("");
}

void bubble(student myStu[SIZE])
{
    student temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (myStu[i].avg < myStu[i + 1].avg) {
                temp = myStu[i];
                myStu[i] = myStu[i + 1];
                myStu[i + 1] = temp;
            }
        }
    }
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
