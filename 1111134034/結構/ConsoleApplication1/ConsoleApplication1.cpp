#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 
struct student
{
    char name[80];
    int ID, math, conpu;
    double agv;
};
void bubble(struct student my_std[SIZE]);
void swap(int* d1ptr, int* d2ptr);
void copy2(char* s1, const char* s2);
int main(void)
{
    struct student my_std[SIZE];
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    for (i = 0; i < SIZE; ++i) {
        my_std[i].ID = studentGrade[i][0];
        my_std[i].math = studentGrade[i][1];
        my_std[i].conpu = studentGrade[i][2];
        my_std[i].agv = ((double)my_std[i].math + my_std[i].conpu) / 2;
        copy2(my_std[i].name,name[i]);
    }

    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", name[i], my_std[i].ID, my_std[i].math, my_std[i].conpu, my_std[i].agv);
        printf("\n");
    }
    printf("\n");

    bubble(my_std);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", name[i], my_std[i].ID, my_std[i].math, my_std[i].conpu, my_std[i].agv);
        printf("\n");
    }
    puts("");
}
void copy2(char* s1, const char* s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {             
    }
}
void bubble(struct student my_std[SIZE])
{
    struct student temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (my_std[i].agv < my_std[i + 1].agv) {
                temp = my_std[i];
                my_std[i] = my_std[i + 1];
                my_std[i + 1] = temp;
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
