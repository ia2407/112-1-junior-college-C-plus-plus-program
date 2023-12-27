#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
struct student //結構定義
{
    char name[20];
    int ID, math, compu;
    double avg;
};
int main(void)
{
    struct student my_stu[SIZE];//結構宣告

    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };
    int i;
  
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    
    for (i = 0; i < SIZE; ++i) {
        my_stu[i].ID = studentGrade[i][0];
        my_stu[i].math = studentGrade[i][1];
        my_stu[i].compu = studentGrade[i][2];
        my_stu[i].avg = ((double)my_stu[i].math + my_stu[i].compu) / 2;//計算平均
        strcpy_s(my_stu[i].name, name[i]);//strcpy 一個字串複製函數

    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", my_stu[i].name, my_stu[i].ID, my_stu[i].math,my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    printf("\n");
}


