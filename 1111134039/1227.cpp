#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 

struct student
{
    char name[80];
    int id, math, conpu;
    double avg;
};

void bubble(student my_stu[SIZE]);
void swap(int* d1ptr, int* d2ptr);
void copy2(char* s1, const char* s2);

int main(void)
{
    struct student my_stu[SIZE];
   
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
   
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");

    for (i = 0; i < SIZE; ++i) {
        my_stu[i].id = studentGrade[i][0];
        my_stu[i].math = studentGrade[i][1];
        my_stu[i].conpu = studentGrade[i][2];
        my_stu[i].avg = ((double)my_stu[i].math+ my_stu[i].conpu) / 2;
        copy2(my_stu[i].name,name[i]);
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", name[i], my_stu[i].id, my_stu[i].math, my_stu[i].conpu, my_stu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(my_stu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf",name[i], my_stu[i].id, my_stu[i].math, my_stu[i].conpu, my_stu[i].avg);
        printf("\n");
    }
    puts("");

}
void copy2(char* s1, const char* s2){
    for (; (*s1 = *s2)!= '\0'; ++s1, ++s2) {

   }
    }
void bubble(struct student my_stu[SIZE])
{
    struct student temp;
    
    unsigned int pass, i;
                    
    for (pass = 0; pass < SIZE; ++pass) {

   
        for (i = 0; i < SIZE - 1; ++i) {
         
            if (my_stu[i].avg <my_stu[i + 1].avg) {
            
                temp = my_stu[i];
                my_stu[i] = my_stu[i + 1];
                my_stu[i + 1] = temp;
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