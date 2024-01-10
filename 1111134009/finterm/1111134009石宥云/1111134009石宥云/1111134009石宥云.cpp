#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 3

int i;
typedef struct {
    char name[20];
    int ID, math, compu;
    float avg;
}stu;

void bubble(stu my_Stu[SIZE]);

int main(void)
{
    stu my_stu[SIZE];
    int studentGrade[SIZE][EXAM] = { {1,74,55},{2,56,88}, {3,84,11},{4,88,52}, {5,100,100}, {6,0,0}, {7,51,81}, {8,74,14},{9,77,55}, {10,97,68} };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("原始資料內容");

    for (i = 0; i < SIZE; ++i) {
        my_stu[i].ID = studentGrade[i][0];
        my_stu[i].math = studentGrade[i][1];
        my_stu[i].compu = studentGrade[i][2];
        my_stu[i].avg = ((double)my_stu[i].math+my_stu[i].compu) / 2;
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %10lf",name[i], my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(my_stu);

    puts("\n經過排列的資料");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %10lf", name[i], my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    puts("");
}

void bubble(stu my_Stu[SIZE])
{   stu temp;
    unsigned int pass, i;             
    for (pass = 0; pass < SIZE; ++pass) {
        for (i = 0; i < SIZE - 1; ++i) {
               
            if (my_Stu[i].avg > my_Stu[i+1].avg) {
                temp = my_Stu[i];
                my_Stu[i] = my_Stu[i+ 1];
                my_Stu[i+1] = temp;
            }
        }
    }
}
    