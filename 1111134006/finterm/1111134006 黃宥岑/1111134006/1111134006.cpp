#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 3 


typedef struct {
    char name[20];
    int ID, math, compu;
    float avg;
}stu;
void bubble(stu myStu[SIZE]);


int main(void)
{
    typedef int myint;
    myint i;
    char inputname[20];
    stu myStu[SIZE], tempStu;

    int studentGrade[SIZE][EXAM] = { {1,74,55},{2,56,88}, {3,84,11},
 {4,88,52}, {5,100,100}, {6,0,0}, {7,51,81}, {8,74,14},
 {9,77,55}, {10,97,68} };


    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");

    for (i = 0; i < SIZE; ++i) {
        myStu[i].ID = studentGrade[i][0];
        myStu[i].math = studentGrade[i][1];
        myStu[i].compu = studentGrade[i][2];
        myStu[i].avg = ((float)myStu[i].math + myStu[i].compu) / 2;
    }

    printf("%10s  %5s %5s %5s \n", "Name", "ID", "Math", "Compu");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d ", name[i], myStu[i].ID, myStu[i].math, myStu[i].compu);
        printf("\n");
    }
    printf("\n");

    bubble(myStu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s\n", "Name", "ID", "Math", "Compu");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d ", name[i], myStu[i].ID, myStu[i].math, myStu[i].compu);
        printf("\n");
    }
    puts("");
}



void bubble(stu myStu[SIZE])
{
    stu temp;
    unsigned int pass, i;

    for (pass = 0; pass < SIZE; ++pass) {
        for (i = 0; i < SIZE - 1; ++i) {
            if (myStu[i].avg > myStu[i + 1].avg) {
                temp = myStu[i];
                myStu[i] = myStu[i + 1];
                myStu[i + 1] = temp;
            }
        }
    }
}
