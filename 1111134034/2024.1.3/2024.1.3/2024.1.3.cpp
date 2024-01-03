﻿#include <stdio.h>
#include <string.h>
#define SIZE 4
#define EXAM 4 
typedef struct {  //結構定義
    char name[20];
    int ID, math, compu;
    float avg;
}student;

void bubble(student myStu[SIZE]);

int main(void)
{
    int i;

    student myStu[SIZE], tempStu, * prtStu;  //結構宣告

    char inputname[20];
    for (i = 0; i < SIZE; ++i) {          //結構存入資料
        printf("\n請輸入第%d筆學生資料", i + 1);
        printf("\n請輸入學生姓名");
        scanf_s("%s", inputname, 20);
        strcpy_s(myStu[i].name, inputname);
        printf("\n輸入學生學號");
        scanf_s("%d", &myStu[i].ID);
        printf("\n輸入學生計概成績");
        scanf_s("%d", &myStu[i].compu);
        printf("\n輸入學生數學成績");
        scanf_s("%d", &myStu[i].math);
        myStu[i].avg = ((float)myStu[i].math + myStu[i].compu) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {    //印出結構內容
        printf("%10s  %5d %5d %5d %5f", myStu[i].name, myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(myStu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5f", myStu[i].name, myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    puts("");
}

void bubble(student myStu[SIZE])
{
    student temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (myStu[i].avg < myStu[i + 1].avg) {
                temp = myStu[i];
                myStu[i] = myStu[i + 1];
                myStu[i + 1] = temp;
            }
        }
    }
}
