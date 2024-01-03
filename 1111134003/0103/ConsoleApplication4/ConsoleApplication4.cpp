// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <string.h>
#define SIZE 2
#define EXAM 4 
typedef struct {
    char name[20];
    int ID, math, compu;
    float avg;
}student;
void bubble(student myStu[SIZE]);

int main(void)
{
    student myStu[SIZE] , tempStu;

    int i;
    char input_name[80] = {};

    for (i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個學生的資料\n", i+1);

        puts("請輸入名字");
        scanf_s("%s", input_name, 80);
        strcpy_s(myStu[i].name, input_name);

        puts("請輸入學號");
        scanf_s("%d", &myStu[i].ID);

        puts("請輸入數學成績");
        scanf_s("%d", &myStu[i].math);

        puts("請輸入計概成績");
        scanf_s("%d", &myStu[i].compu);

        myStu[i].avg = ((float)myStu[i].math + myStu[i].compu) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
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

    for (pass = 0; pass < SIZE; ++pass)
    {
        for (i = 0; i < SIZE - 1; ++i)
        {          
            if (myStu[i].avg < myStu[i + 1].avg)
            {
                temp = myStu[i];
                myStu[i] = myStu[i + 1];
                myStu[i + 1] = temp;
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
