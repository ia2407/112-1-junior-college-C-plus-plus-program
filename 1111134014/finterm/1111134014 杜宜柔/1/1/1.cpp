#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
struct stu {
    char  name[20];
    int id, math, compu;
    double avg;
};
void bubble(stu myStu[SIZE]);
void swap(int* d1ptr, int* d2ptr);
void copy(char* s1, const char* s2);


int main(void)
{
    struct stu myStu[SIZE];
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
       {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
       {9,77,55,0}, {10,97,68,0} };

    int i;   
    
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };

    puts("Data items in original order");

    for (i = 0; i < SIZE; ++i) {
        myStu[i].id = studentGrade[i][0];
        myStu[i].math = studentGrade[i][1];
        myStu[i].compu = studentGrade[i][2];
        myStu[i].avg = ((double)myStu[i].math+ myStu[i].compu) / 2;
        copy(myStu[i].name, name[i]);
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", myStu[i].name, myStu[i].id, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }

    printf("\n");

    bubble(myStu);

    puts("\n排列完成的資料");

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", myStu[i].name, myStu[i].id, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    puts("");
}

void bubble(stu myStu[SIZE])
{
    stu  temp;
    int pass, i;
              
    for (pass = 0; pass < SIZE; ++pass) {

        for (i = 0; i < SIZE - 1; ++i) {
            if (myStu[i].avg > myStu[i + 1].avg) {
                swap(&myStu[i].name, &myStu[i + 1].name);
                swap(&myStu[i].id, &myStu[i + 1].id);
                swap(&myStu[i].math, &myStu[i + 1].math);
                swap(&myStu[i].compu, &myStu[i + 1].compu);
                temp = myStu[i];
                myStu[i] = myStu[i + 1];
                myStu[i + 1] = temp;
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

void copy(char* s1, const char * s2) {
    for (;(*s1=*s2)!='\0'; ++s1, ++s2) {
    }
}
