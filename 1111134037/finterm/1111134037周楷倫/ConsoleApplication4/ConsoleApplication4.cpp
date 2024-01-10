// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 10 

// function main begins program execution
void bubble(int array[][EXAM], const char* name[SIZE]);
void swap(int* d1ptr, int* d2ptr);
typedef struct 
{
    const char* name[20];
    int ID[10];
    int math[10];
    int compu[10];
    float avg[10];
}stu;
int main(void)
{
    int pow = 10;
    int col = 10;
    char cc[SIZE][EXAM] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    char** marix = new char* [pow];
    for (int i = 0; i < 10; ++i)
    {
        marix[i] = new char [col+1];
    }
    stu s1;
    for (int j = 0; j < 10; ++j)
    {
        marix[j] = cc[j];
        s1.name[j] = marix[j];
        s1.ID[j] = studentGrade[j][0];
        s1.math[j] = studentGrade[j][1];
        s1.compu[j] = studentGrade[j][2];
        
    }
    
    
    // initialize a
    
    
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };

    
    puts("Data items in original order");
    // output original array
    for (i = 0; i < SIZE; ++i) {
        studentGrade[i][3] = (s1.math[i] + s1.compu[i]) / 2;
        s1.avg[i] = studentGrade[i][3];
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5f", s1.name[i], s1.ID[i], s1.math[i], s1.compu[i], s1.avg[i]);
        printf("\n");
    }
    printf("\n");

    bubble(studentGrade, s1.name);
    for (int j = 0; j < 10; ++j)
    {
        marix[j] = cc[j];
        
        s1.ID[j] = studentGrade[j][0];
        s1.math[j] = studentGrade[j][1];
        s1.compu[j] = studentGrade[j][2];
        s1.avg[j] = studentGrade[j][3];
    }

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5f", s1.name[i], s1.ID[i], s1.math[i], s1.compu[i], s1.avg[i]);
        printf("\n");
    }
    puts("");
}



void bubble(int array[][EXAM], const char* name[SIZE])
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
            if (array[i][3] > array[i + 1][3]) {
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
