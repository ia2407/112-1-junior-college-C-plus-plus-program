// 1111134025 張銓洧.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 

// function main begins program execution
void bubble(struct stu mystu[SIZE]);
void cpoy(char* s1, const char* s2);

struct stu{ //結構定義
    char name[20];
    int ID, math, compu;
    float avg;
};
stu mystu[SIZE], tempStu;//結構宣告

int main(void)
{
    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array

    for (i = 0; i < SIZE; ++i) {//把資料放入結構
        mystu[i].ID = studentGrade[i][0];
        mystu[i].math = studentGrade[i][1];
        mystu[i].compu = studentGrade[i][2];
        mystu[i].avg = ((float)mystu[i].math + mystu[i].compu)/2;
        cpoy(mystu[i].name, name[i]);//呼叫cpoy副程式
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {//列印未排序的資料
        printf("%10s  %5d %5d %5d %5f", mystu[i].name, mystu[i].ID, mystu[i].math, mystu[i].compu, mystu[i].avg);
        printf("\n");
    }

    printf("\n");

    bubble(mystu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {//列印排序過的資料
        printf("%10s  %5d %5d %5d %5f", mystu[i].name, mystu[i].ID, mystu[i].math, mystu[i].compu, mystu[i].avg);
        printf("\n");
    }
    puts("");
}

void cpoy(char* s1, const char* s2) //將名字匯入到結構中的副程式
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ;
    }
}



void bubble(struct stu mystu[SIZE]) //用以交換資料排序的副程式
{
    struct stu temp;
    unsigned int pass, i;
    for (pass = 0; pass < SIZE; ++pass) {
        for (i = 0; i < SIZE - 1; ++i) {
            if (mystu[i].avg > mystu[i + 1].avg) //對比資料大小進行資料交換並由小排到大
            {
                temp = mystu[i];
                mystu[i] = mystu[i + 1];
                mystu[i+1]=temp;
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
