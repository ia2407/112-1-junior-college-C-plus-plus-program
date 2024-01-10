// 1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 

int i;
void copy2(char* s1, const char* s2);
// function main begins program execution
typedef struct {
    char name[20];
    int id, math, compu;
    float avg;
}student;
void bubble(student mystu[SIZE]);
void swap(int* d1ptr, int* d2ptr);



int main(void)
{

    student mystu[SIZE], * tempstu;
    tempstu = mystu;
        // initialize a
        int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
     {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
     {9,77,55,0}, {10,97,68,0} };

    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array
    for (i = 0; i < SIZE; ++i) {
        mystu[i].id = studentGrade[i][0];
        mystu[i].math = studentGrade[i][1];
        mystu[i].compu = studentGrade[i][2];
        copy2(mystu[i].name, name[i]);
        mystu[i].avg = ((double)mystu[i].math + mystu[i].compu) / 2;
    }
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", mystu[i].name, mystu[i].id, mystu[i].math, mystu[i].compu, mystu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(mystu);

    puts("\nData items in ascending order");

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5d", mystu[i].name, mystu[i].id, mystu[i].math, mystu[i].compu, mystu[i].avg);
        printf("\n");
    }
    puts("");
}
void bubble(student mystu[SIZE])
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
            if (mystu[i].avg < mystu[i + 1].avg) {
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
void copy2(char* s1, const char* s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ;
    }
}


