#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
typedef struct {
    char name[20];
    int ID, math, compu;
    float avg;
}stu;

// function main begins program execution
void bubble(int array[][EXAM], const char* name[SIZE]);
void cop2(int* d1ptr, int* d2ptr);
int main(void)
{
    stu mystu[SIZE];
    
    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array
    for (i = 0; i < SIZE; ++i) {
        mystu[i].ID=studentGrade[i][0];
        mystu[i].math = studentGrade[i][1];
        mystu[i].compu = studentGrade[i][2];
        mystu[i].avg = ((double)mystu[i].math + mystu[i].compu) / 2;
        //copy2(mystu[i].name, name[i]);
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", mystu[i].name, mystu[i].ID, mystu[i].math, mystu[i].compu, mystu[i].avg);
       
        printf("\n");
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
void copp2(char* s1, const char* s2) {
for (; (*s1 = *s2) != '\0'; ++s1, ++s2) { ; }
}


void bubble(int array[][EXAM], const char* name[SIZE], stu mystu[SIZE])
{
    stu temp;
  
    char* temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i][3] < array[i + 1][3]) {
               // swap(&array[i][0], &array[i + 1][0]);
                //swap(&array[i][1], &array[i + 1][1]);
               // swap(&array[i][2], &array[i + 1][2]);
              //  swap(&array[i][3], &array[i + 1][3]);
                temp = mystu[i];
                mystu[i] = mystu[i + 1];
                mystu[i + 1] = temp;
            }
        }
    }
}


void swap(int* d1ptr, int* d2ptr)
{
    int hold = *d1ptr;
    *d1ptr = *d2ptr;
    *d2ptr = hold;
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
