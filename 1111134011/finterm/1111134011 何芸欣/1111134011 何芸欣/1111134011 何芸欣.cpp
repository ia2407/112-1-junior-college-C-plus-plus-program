#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
struct stu
{
    char name[20];
    int ID, math, compu;
    double avg;
};
    // function main begins program execution
void bubble(struct stu my_stu[SIZE]);
void copy2(char* s1, const char* s2);
int main(void)
{
    struct stu my_stu[SIZE];
    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    // output original array
    for (i = 0; i < SIZE; ++i) {
        my_stu[i].ID = studentGrade[i][0];
        my_stu[i].math = studentGrade[i][1];
        my_stu[i].compu = studentGrade[i][2];
        my_stu[i].avg = ((double)my_stu[i].math + my_stu[i].compu) / 2;
        copy2(my_stu[i].name, name[i]);
    }
    printf("%5s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");
    for (i = 0; i < SIZE; ++i) {
        printf("%5s %5d %5d %5d %51f", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(my_stu);
        printf("%5s  %5s %5s %5s  %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%5s  %5d %5d %5d  %5lf", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    puts("");
}



void copy2(char* s1, const char* s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ;
    }
}
void bubble(struct stu my_stu[SIZE])
{
    struct stu temp;
    unsigned int pass, i;
    for (pass = 0; pass < SIZE; ++pass) {
        for (i = 0; i < SIZE - 1; ++i) {
            if (my_stu[i].avg > my_stu[i + 1].avg) {
                temp = my_stu[i];
                my_stu[i] = my_stu[i + 1];
                my_stu[i + 1] = temp;
            }
        }
    }
}