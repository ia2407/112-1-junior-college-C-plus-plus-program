#include <stdio.h>
#include <string.h>
#define SIZE 10   //學生人數
#define EXAM 4      //每個學生的資料、成績

// function main begins program execution
void bubble(int array[][EXAM], const char* name[SIZE], int (*fptr)(int a, int b));
int ine(int a, int b);//遞增
int dec(int a, int b);//遞減
void swap(int* d1ptr, int* d2ptr);
int main(void)
{
    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},//定義陣列  "學號","數學","計概","平均"
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };

    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };//名字
    puts("Data items in original order");
    // output original array
    for (i = 0; i < SIZE; ++i) {//計算平均
        studentGrade[i][3] = (studentGrade[i][1] + studentGrade[i][2]) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    printf("\n");
    int ch;
    printf("您想要遞增(1)還是遞減(2)排序");
    scanf_s("%d", &ch);
    if (ch == 1) 
    {
        bubble(studentGrade, name, ine);
    }
    else if (ch == 2)
    {
        bubble(studentGrade, name, dec);
    }

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    puts("");
}
int ine(int a, int b)//遞增
{
    return a > b;
}
int dec(int a, int b)//遞減
{
    return a < b;
}


void bubble(int array[][EXAM], const char* name[SIZE], int (*fptr)(int a, int b))//排列副程式
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
void swap(int* d1ptr, int* d2ptr)//交換副程式
{
    int hold = *d1ptr;
    *d1ptr = *d2ptr;
    *d2ptr = hold;
}