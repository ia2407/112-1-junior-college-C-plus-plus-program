#include <stdio.h>
#include <string.h>
#define SIZE 10
#define EXAM 4 

// function main begins program execution
//void swap(int* d1ptr, int* d2ptr);
struct info
{
    int ID, math, compu;
    char name[20];
    double avg;
};
void bubble(struct info information[SIZE]);
void copy2(char* s1, const char* s2); // prototype
int main(void)
{

    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array

    struct info info1[SIZE];

    for (i = 0; i < SIZE; ++i) {
        info1[i].ID = studentGrade[i][0];
        info1[i].math = studentGrade[i][1];
        info1[i].compu = studentGrade[i][2];
        info1[i].avg = ((double)info1[i].math + info1[i].compu) / 2;
        copy2(info1[i].name, name[i]);
    }
    
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");
    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", info1[i].name, info1[i].ID, info1[i].math, info1[i].compu, info1[i].avg);
        printf("\n");
    }
    printf("\n");


    bubble(info1);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %5lf", info1[i].name, info1[i].ID, info1[i].math, info1[i].compu, info1[i].avg);
        printf("\n");
    }
    puts("");
}


void bubble(struct info information[SIZE])
{
    struct info temp;
    unsigned int pass, i;
    // bubble sort                                         
    // loop to control number of passes                    
    for (pass = 0; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (information[i].avg < information[i+1].avg) {
                temp = information[i + 1];
                information[i + 1] = information[i];
                information[i] = temp;
            }
        }
    }
}
void copy2(char* s1, const char* s2)
{

    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ;               
    }
}