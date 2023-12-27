// 10.27-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <string.h>
#include <stdio.h>
#define SIZE 10
#define EXAM 4 

// 宣告副程式
void bubble(struct stu mystu[SIZE]);
void copy2(char* s1, const char* s2);

struct stu  // 結構陣列定義
{
    char name[20];
    int id, math, compu;
    double avg;
};

int main(void)
{
    struct stu mystu[SIZE]; // 結構陣列宣告
    // 宣告studentGrade陣列
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };

    int i;
    
    // 宣告name陣列
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    
    for (i = 0; i < SIZE; ++i) {
        mystu[i].id = studentGrade[i][0];
        mystu[i].math = studentGrade[i][1];
        mystu[i].compu = studentGrade[i][2];
        mystu[i].avg = ((double)mystu[i].math+ mystu[i].compu) / 2;
        copy2(mystu[i].name, name[i]);
    }

    puts("原始資料");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {   // 輸出原始資料
        printf("%10s  %5d %5d %5d %5lf", mystu[i].name, mystu[i].id, mystu[i].math, mystu[i].compu, mystu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(mystu);  // 丟入副程式

    puts("\n比較完的資料");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {   // 輸出比較完的資料
        printf("%10s  %5d %5d %5d %5lf", mystu[i].name, mystu[i].id, mystu[i].math, mystu[i].compu, mystu[i].avg);
        printf("\n");
    }
    puts("");
}

void copy2(char* s1, const char* s2) // 將s2的內容複製到s1 
{
    // 將s2複製指向的字符指向s1同時往前移動一位直到循環完整個字串  終止條件:遇到\0 
    // 好處是不會破壞結構
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ;               
    }
}

void bubble(struct stu mystu[SIZE]) // 氣泡排序副程式
{
    struct stu temp;
    unsigned int pass, i;
                                            
    // 控制迴圈經歷次數                    
    for (pass = 0; pass < SIZE; ++pass) {

        // 控制迴圈每次比較次數   
        for (i = 0; i < SIZE - 1; ++i) {
              // 如果第二個大於第一個則交換
              if (mystu[i].avg < mystu[i + 1].avg) {
                temp = mystu[i];
                mystu[i] = mystu[i + 1];
                mystu[i + 1] = temp;
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
