#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4

void copy2(char* s1, const char* s2);
void bubble(struct stu_data student[SIZE]);
void swap(int* d1ptr, int* d2ptr);

struct stu_data
{
    char name[80] = {};
    int id, math, compu;
    double avg;
};

int main(void)
{
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };

    struct stu_data student[SIZE];

    int i;
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };

    puts("Data items in original order");

    for (i = 0; i < SIZE; ++i) {//計算平均
        student[i].id = studentGrade[i][0];
        student[i].math = studentGrade[i][1];
        student[i].compu = studentGrade[i][2];
        copy2(student[i].name, name[i]);
        student[i].avg = ((double)student[i].math + student[i].compu) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", student[i].name, student[i].id, student[i].math, student[i].compu, student[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(student);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", student[i].name, student[i].id, student[i].math, student[i].compu, student[i].avg);
        printf("\n");
    }
    puts("");
}

void bubble(struct stu_data student[SIZE])
{
    struct stu_data temp;
    unsigned int pass, i;                 
    for (pass = 0; pass < SIZE; ++pass) {   
        for (i = 0; i < SIZE - 1; ++i) {        
            if (student[i].avg> student[i+1].avg) {
                temp = student[i];
                student[i] = student[i + 1];
                student[i + 1] = temp;
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
void copy2(char* s1, const char* s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ;               
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
