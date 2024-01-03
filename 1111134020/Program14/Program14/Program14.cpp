#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
typedef struct  {  //結構定義
    char name[20];
    int ID, math, compu;
    float avg;
}student;
// function main begins program execution
void bubble(student myStu[SIZE]);

int main(void)
{
   
    char inputName[20];
    typedef int myint;
    myint i;
    student myStu[SIZE], tempStu,*prtstu; //結構宣告
    prtstu = myStu;
    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array

    for (i = 0; i < SIZE; ++i) {          //結構存入資料
        printf("\n請輸入第%d筆學生資料", i);
        printf("\n請輸入學生姓名");
        scanf_s("%s", inputName);
          strcpy(myStu[i].name, inputName[i]);
        printf("\n請輸入學生學號");
        scanf_s("%d", &myStu[i].ID);
        printf("\n請輸入數學成績");
        scanf_s("%d", &myStu[i].math);
        printf("\n請輸入計概成績");
        scanf_s("%d", &myStu[i].compu);
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
