#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 

// function main begins program execution

void bubble(struct stu_data student[SIZE]);
void copy2 (char*s1,const char*s2);
void swap(int* d1ptr, int* d2ptr);

struct stu_data
{
    int id, math, computer;
    char name[20];
    double avg;
};

int main(void)
{
    struct stu_data student[SIZE];

    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };

  

    int i;   
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };

    puts("Data items in original order");

    for (i = 0; i < SIZE; ++i) {
        student[i].id = studentGrade[i][0];
        student[i].math = studentGrade[i][1];
        student[i].computer = studentGrade[i][2];
        copy2(student[i].name, name[1]);
        student[i].avg = (student[i].math + student[i].computer) / 2;
    };

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", name[i], student[i].id, student[i].math, student[i].computer, student[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(student);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", name[i], student[i].id, student[i].math, student[i].computer, student[i].avg);
        printf("\n");
    }
    puts("");
}
void bubble(struct stu_data student[SIZE])
{
    struct stu_data temp;
        unsigned int pass, i;   
    for (pass = 0; pass < SIZE; ++pass) {
        for (i = 0; i < SIZE - 1; ++i) {
         
            if (student[i].avg > student[i+1].avg){
                temp = student[i];
                student[i] = student[i + 1];
                student[i + 1] = temp;
               
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