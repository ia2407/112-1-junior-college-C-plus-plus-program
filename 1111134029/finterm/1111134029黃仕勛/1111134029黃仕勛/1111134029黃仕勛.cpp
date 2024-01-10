// 1111134029黃仕勛.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
struct stu 
{
    char name[20];
    int ID, math, compu;
    double avg;
};
void bubble(struct stu my_stu[SIZE]);
void copy2(char*s1,const char*s2);
int main(void)
{
    struct stu my_stu[SIZE];
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    const char* name[SIZE] =
    { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    for (i = 0; i < SIZE; ++i)
    {
        my_stu[i].ID = studentGrade[i][0];
        my_stu[i].math = studentGrade[i][1];
        my_stu[i].compu = studentGrade[i][2];
        my_stu[i].avg  = ((double)my_stu[i].math + my_stu[i].compu) / 2;
        copy2(my_stu[i].name, name[i]);
    }

    printf("%5s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%5s  %5d %5d %5d %51f", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(my_stu);

   
    printf("%5s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%5s  %5d %5d %5d      %51f", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    puts("");
}



void copy2(char* s1, const char* s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2)
    {
        ;
    }
}
    void bubble(struct stu my_stu[SIZE])
    {
        struct stu temp;
        unsigned int pass, i;

        for (pass = 0; pass < SIZE; ++pass) {
            for (i = 0; i < SIZE - 1; ++i) {
                if (my_stu[i].avg > my_stu[i + 1].avg)
                {
                    temp = my_stu[i];
                    my_stu[i] = my_stu[i + 1];
                    my_stu[i + 1] = temp;
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
