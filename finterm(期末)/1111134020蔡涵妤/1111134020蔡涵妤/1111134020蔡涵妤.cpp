// 1111134020蔡涵妤.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 3 
int i;
// function main begins program execution
typedef struct {
    char name[20];
    int ID, math, compu;
    float avg;
}stu;
void bubble(stu myStu[SIZE]);

int main(void)
{
    // initialize a
    typedef int myint;
    myint i;
    stu myStu[SIZE], tempStu;
    //stu myStu[0]
    int studentGrade[SIZE][EXAM] = { {1,74,55},{2,56,88}, {3,84,11},
 {4,88,52}, {5,100,100}, {6,0,0}, {7,51,81}, {8,74,14},
 {9,77,55}, {10,97,68} };
//int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array
    
    for (i = 0; i < SIZE; ++i) {
        //strcpy(myStu[i].name, name[i]);
        //myStu[i].name =(int)name[i];
        myStu[i].ID = studentGrade[i][0];
        myStu[i].math = studentGrade[i][1];
        myStu[i].compu = studentGrade[i][2];
        myStu[i].avg = ((float)myStu[i].math + myStu[i].compu) / 2;
    }

    printf("%10s  %5s %5s %5s\n", "Name", "ID", "Math", "Compu");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d", name[i], myStu[i].ID, myStu[i].math, myStu[i].compu);
        printf("\n");
    }
    printf("\n");

    bubble(myStu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s\n", "Name", "ID", "Math", "Compu");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d", name[i], myStu[i].ID, myStu[i].math, myStu[i].compu);
        printf("\n");
    }
    puts("");
}



void bubble(stu myStu[SIZE])
{
    stu temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (myStu[i].avg> myStu[i+1].avg) {
                
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
