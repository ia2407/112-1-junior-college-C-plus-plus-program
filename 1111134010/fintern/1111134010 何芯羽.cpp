// 1111134010 何芯羽.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4

// function main begins program execution
void bubble(int array[][EXAM], const char* name[SIZE]);
void swap(int* a, int* b);
int main(void)
{
    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},
                                     {2,56,88,0}, 
                                     {3,84,11,0},
                                     {4,88,52,0},
                                     {5,100,100,0},
                                     {6,0,0,0},
                                     {7,51,81,0},
                                     {8,74,14,0},
                                     {9,77,55,0},
                                     {10,97,68,0} };
    //比較好對照
    int i; 
    for (i = 0; i < SIZE; ++i) {
        studentGrade[i][3] = (studentGrade[i][1] + studentGrade[i][2]) / 2;
    }
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");
    //bubble(a);
    int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
  for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
         puts(" ");
  }
    printf("\n");

    bubble(studentGrade, name);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

  for (i = 0; i < SIZE; ++i) {
              printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
              printf("\n");
  }
    puts("");
}



void bubble(int array[][EXAM], const char* name[SIZE])
{
    char* temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass > SIZE; ++pass) {  
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i][3] >array[i + 1][3]) {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3]);
            }
        }
    }
}


void swap(int* a, int* b)
{
    int hold = *a;
    *a = *b;
    *b = hold;
}

/*
時間不夠沒有看好題目來不及改完QQ
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4
#include <iostream>
struct stu {
    char name[20];
    int ID, math, compu;
    double avg;
};
void bubble(struct stu my_stu[SIZE]);
void copy2(char* s1, const char* s2);
int main(void)
{
    struct stu my_stu[SIZE];
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},
                                     {2,56,88,0},
                                     {3,84,11,0},
                                     {4,88,52,0},
                                     {5,100,100,0},
                                     {6,0,0,0},
                                     {7,51,81,0},
                                     {8,74,14,0},
                                     {9,77,55,0},
                                     {10,97,68,0} };
    int i;
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    for (i = 0; i < SIZE; ++i)
    {
        my_stu[i].ID = studentGrade[i][0];
        my_stu[i].math = studentGrade[i][1];
        my_stu[i].compu = studentGrade[i][2];
        my_stu[i].avg = ((double)my_stu[i].math + my_stu[i].compu) / 2;
        copy2(my_stu[i].name, name[i]);
    }
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");
    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    bubble(my_stu);
    printf("%10s  %5d %5d %5d %5d", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    void copy2(char* s1, const char* s2)
    {
        
    }
   void bubble(int array[][EXAM], const char* name[SIZE])
   {struct stu temp;
   for pass = 0;pass <SIZE;++pass
   for( i =0;i<SIZE-1,++i
   if(my_stu[i.avg]

}*/