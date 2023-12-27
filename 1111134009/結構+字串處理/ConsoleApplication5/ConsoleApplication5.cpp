#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
struct student//結構定義
{ 
    char name[20];
    int ID, math, compu;
    double avg;
};

void bubble(struct student mystu[SIZE]);
void swap(int* d1ptr, int* d2ptr);
void copy2(char* s1, const char* s2);
//函數宣告

int main(void)//主程式
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
        copy2(my_stu[i].name, name[i]);//表示一個字串複製函數

    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(my_stu);//呼叫副程式，呼叫結構

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    puts("");
}

void copy2(char* s1, const char* s2)//複製字串函數
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {// "\0" 表示結束字元
        ;         
    }
}

void bubble(struct student mystu[SIZE])//比較成績大小並按照順序排序
{
    struct student temp;
    unsigned int pass, i;
              
    for (pass = 0; pass < SIZE; ++pass) {
        for (i = 0; i < SIZE - 1; ++i) {
            if (mystu[i].avg < mystu[i + 1].avg) {//將結構內容進行互換
                temp = mystu[i];
                mystu[i] = mystu[i + 1];
                mystu[i + 1] = temp;
            }
        }
    }
}
void swap(int* d1ptr, int* d2ptr)//定義副程式，交換變數值
{
    int hold = *d1ptr;
    *d1ptr = *d2ptr;
    *d2ptr = hold;
}
