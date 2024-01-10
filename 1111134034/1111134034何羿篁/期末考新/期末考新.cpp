#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 

// function main begins program execution
typedef struct
{
    char name[20];
    int ID, math, compu;
    float avg;
}student;
void bubble(student myStu[SIZE]);
int main(void)
{
    student myStu[SIZE], * tempStu;
    tempStu = myStu;

    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    int i; 
    char intputname[20];
    for (i = 0; i < SIZE; ++i)
    {
        //myStu[i].name = name[i];
        myStu[i].ID = studentGrade[i][0];
        myStu[i].math = studentGrade[i][1];
        myStu[i].compu = studentGrade[i][2];
        myStu[i].avg = ((float)myStu[i].math + myStu[i].compu) / 2;

    }
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    puts("Data items in original order");
    

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5f", name[i], myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(myStu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5f", name[i], myStu[i].ID, myStu[i].math, myStu[i].compu, myStu[i].avg);
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
            if (myStu[i].avg < myStu[i+1].avg) {                
                temp = myStu[i];
                myStu[i] = myStu[i+1];
                myStu[i + 1] = temp;
            }
        }
    }
}

