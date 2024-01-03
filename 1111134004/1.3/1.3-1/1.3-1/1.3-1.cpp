#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
typedef struct {  //結構定義
    char name[20];
    int ID, math, compu;
    float avg;
} student;//型態的別名

void bubble(student myStu[SIZE]); // 副程式

int main(void) // 主程式
{
    student myStu[SIZE], *tempStu;  //結構宣告
    tempStu = myStu;

    int i;

    char inputname[20]; // 宣告字串陣列
       
    for (i = 0; i < SIZE; ++i) {          //結構存入資料
        // 輸入學生姓名
        printf("\n輸入第%d筆學生資料",i);   
        printf("輸入學生姓名");
        scanf_s("%s", &inputname,20); // 限制字元
        strcpy_s(myStu[i].name, inputname); // 將s2拷貝至s1
        // 輸入學生學號
        printf("輸入學生學號");
        scanf_s("%d", &myStu[i].ID);
        // 輸入學生數學成績
        printf("輸入學生數學成績");
        scanf_s("%d",  &myStu[i].math);
        // 輸入學生計概成績
        printf("輸入學生計概成績");
        scanf_s("%d",& myStu[i].compu);
        // 計算學生平均成績
        myStu[i].avg = ((float)myStu[i].math + myStu[i].compu) / 2;
    }
    
    puts("Data items in original order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {    //印出原始結構內容
        printf("%10s  %5d %5d %5d %5f", myStu[i].name, myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(myStu);

    puts("\nData items in ascending order");//印出排序後結構內容
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5f", myStu[i].name, myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    puts("");
}

void bubble( student myStu[SIZE]) // 氣泡排序 
{
    student temp;
    unsigned int pass, i;
                                           
    // 控制迴圈經歷次數                 
    for (pass = 0; pass < SIZE; ++pass) {

        // 控制迴圈比較次數   
        for (i = 0; i < SIZE - 1; ++i) {
            // 比較數字大小
            if (myStu[i].avg < myStu[i + 1].avg) {
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
