#include <iostream>
#include <stdio.h>
#include <string.h>
#define SIZE 10   //學生人數
#define EXAM 4    //每個學生的資料、成績

void bubble(int array[][EXAM], const char* name[SIZE], int(*fptr)(int a, int b));//函數宣告,const=變數指標,char=字串,()()=函數指標
int INC(int a, int b);//遞增宣告
int DEC(int a, int b);//遞減宣告
void swap(int* d1ptr, int* d2ptr);//swap宣告
int main(void)
{
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},//儲存學生成績二維陣列
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };
    int i, chose = 0;

    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };//儲存姓名二維陣列
    
    for (i = 0; i < SIZE; ++i) {//計算平均
        studentGrade[i][3] = (studentGrade[i][1] + studentGrade[i][2]) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");//印出標題

    for (i = 0; i < SIZE; ++i) {//原始資料
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    printf("\n請告訴我您要遞增(1)還是遞減(2)排序?");
    scanf_s("%d", &chose);

    if (chose == 1)//如果選擇=1進行遞增，如果=2進行遞減
        bubble(studentGrade, name, INC);//呼叫副程式
    else if (chose == 2)
        bubble(studentGrade, name, DEC);//確定指向的指標

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");//印出標題

    for (i = 0; i < SIZE; ++i) {//比大小後的資料
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    puts("");
}

int INC(int a, int b)//定義遞增
{
    return a > b;
}
int DEC(int a, int b)//定義遞減
{
    return a < b;
}
void bubble(int array[][EXAM], const char* name[SIZE], int(*fptr)(int a, int b))//定義副程式
{
    const char* temp;
    unsigned int pass, i;
                  
    for (pass = 0; pass < SIZE; ++pass) {

        for (i = 0; i < SIZE - 1; ++i) {
    
            if ((*fptr)(array[i][3], array[i + 1][3])) {
                swap(&array[i][0], &array[i + 1][0]);//比大小
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
void swap(int* d1ptr, int* d2ptr)//宣告指標變數d1ptr儲存int變數位址
{
    int hold = *d1ptr;//交換變數值
    *d1ptr = *d2ptr;
    *d2ptr = hold;
}