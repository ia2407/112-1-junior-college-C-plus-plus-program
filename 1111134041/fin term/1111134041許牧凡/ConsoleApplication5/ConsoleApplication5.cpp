#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
typedef struct {  //結構定義
    char name[10];
    int ID, math, compu;
    float avg;
}student;
void bubble(student myStu[SIZE]);

int main(void)
{
    typedef int myint;
    myint i;

    student myStu[SIZE];   //結構宣告
    int studentGrade[SIZE][EXAM];
    const char intputName[20] = {};
    puts("Data items in original order");

    for (i = 0; i < SIZE; ++i) {          //結構存入資料
        printf("\n請輸入第%d筆學生資料", i);
        printf("\n請輸入學生姓名");
        scanf_s("%s", intputName, 20);
        strcpy_s(myStu[i].name, intputName);
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

    for (pass = 0; pass < SIZE; ++pass) {

        for (i = 0; i < SIZE - 1; ++i) {

            if (myStu[i].avg < myStu[i + 1].avg) {
                temp = myStu[i];
                myStu[i] = myStu[i + 1];
                myStu[i + 1] = temp;
            }
        }
    }
}