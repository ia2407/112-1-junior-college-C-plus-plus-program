// 12.27.43.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 


//void bubble(int array[][EXAM], const char* name[SIZE]);
//void swap(int* d1ptr, int* d2ptr);
struct student
{
    char name[20];
    int id, math, computer;
    double avg;
};
void bubble(struct student mystu[10]);
void swap(int* d1ptr, int* d2ptr);
void copy2(char* s1, const char* s2);
int main(void)
{
    struct student mystu[SIZE];

    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array
    for (i = 0; i < SIZE; ++i) {
        mystu[i].id = studentGrade[i][0];
        mystu[i].math = studentGrade[i][1];
        mystu[i].computer = studentGrade[i][2];
        mystu[i].avg = ((double)mystu[i].math + mystu[i].computer) / 2;
        copy2(mystu[i].name, name[i]);
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", mystu[i].name, mystu[i].id, mystu[i].math, mystu[i].computer, mystu[i].avg);
        printf("\n");
    }

    printf("\n");

    bubble(mystu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", mystu[i].name, mystu[i].id, mystu[i].math, mystu[i].computer, mystu[i].avg);
        printf("\n");
    }
    puts("");

}
void copy2(char* s1, const char* s2)
{
    // loop through strings
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ; // do nothing in body                
    }
}


void bubble(struct student mystu[SIZE])
{
    struct student temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
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
