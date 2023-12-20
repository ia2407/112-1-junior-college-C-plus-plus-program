#include <stdio.h>
#include <string.h>
#define SIZE 10   //學生人數
#define EXAM 4      //每個學生的資料、成績

// function main begins program execution
void bubble(int array[][EXAM], const char* name[SIZE],int (*fptr)(int a, int b));//
int INC(int a, int b);
int DEC(int a, int b);
void swap(int* d1ptr, int* d2ptr);
int main(void)
{

    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
    {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
    {9,77,55,0}, {10,97,68,0} };
    int i,chose = 0;

    const char* name[SIZE] {"Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice"};//定義


    puts("Data items in original order");

    for (i = 0; i < SIZE; ++i) {//計算平均
        studentGrade[i][3] = (studentGrade[i][1] + studentGrade[i][2]) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    printf("\n");

    printf("\n你要遞增1還是遞減2");
    scanf_s("%d", &chose);
    if (chose == 1)
        bubble(studentGrade, name, INC);
    else if (chose == 2)
        bubble(studentGrade, name, DEC);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", name[i], studentGrade[i][0], studentGrade[i][1], studentGrade[i][2], studentGrade[i][3]);
        printf("\n");
    }
    puts("");
}


int INC(int a, int b)
{
    return a > b;
}
int DEC(int a, int b)
{
    return a < b;
}

void bubble(int array[][EXAM], const char* name[SIZE],int (*fptr)(int a, int b))
{
    const char* temp;
    unsigned int pass, i;
              
    for (pass = 0; pass < SIZE; ++pass) {

        for (i = 0; i < SIZE - 1; ++i) {
     
            if ((*fptr)(array[i][3], array[i + 1][3])) {
                swap(&array[i][0], &array[i + 1][0]);
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
void swap(int* d1ptr, int* d2ptr)
{
    int hold = *d1ptr;
    *d1ptr = *d2ptr;
    *d2ptr = hold;
}




/*    for (i = 0; i <= SIZE; i++) {
        const char* ptr;
        ptr = name[i];
        printf("請輸入學生名字");
        scanf_s("%s",ptr);
    }*/