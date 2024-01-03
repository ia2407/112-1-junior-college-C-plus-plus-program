#include <string.h>
#include<stdio.h>
#define SIZE 10
#define EXAM 4 

// function main begins program execution
void bubble(struct student my_stu[SIZE]);

struct student {
    char name[20];
    int  ID, math, compu;
    double avg;
};

int main(void)
{
    char inputname[20];

    struct student my_stu[SIZE];
    // initialize a
    int studentGrade[SIZE][EXAM] = { {1,74,55,0},{2,56,88,0}, {3,84,11,0},
 {4,88,52,0}, {5,100,100,0}, {6,0,0,0}, {7,51,81,0}, {8,74,14,0},
 {9,77,55,0}, {10,97,68,0} };
    int i;
    //int a[SIZE] = { 96, 64, 45, 81, 100, 12, 89, 68, 77, 47 };
    const char* name[SIZE] = { "Danny","Jerry","Tom","Sue","Mary","John","Mark","Nina","Apple","Juice" };
    puts("Data items in original order");
    // output original array


    for (i = 0; i < 10; ++i) {
        printf("請輸入第%d筆資料\n", i);
        printf("請輸入名字\n");
        scanf_s("%s", inputname,20);
        strcpy_s(my_stu[i].name, inputname);
        printf("請輸入學號");
        scanf_s("%d", &my_stu[i].ID);
        printf("請輸入數學成績\n");
        scanf_s("%d", &my_stu[i].math);
        printf("請輸入計概成績\n");
        scanf_s("%d", &my_stu[i].compu);
        my_stu[i].avg = ((double)my_stu[i].math + my_stu[i].compu) / 2;
        
    }
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %3lf", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    printf("\n");

    bubble(my_stu);

    puts("\nData items in ascending order");
    printf("%10s  %5s %5s %5s %5s\n", "Name", "ID", "Math", "Compu", "Avg");

    for (i = 0; i < SIZE; ++i) {
        printf("%10s  %5d %5d %5d %3lf", my_stu[i].name, my_stu[i].ID, my_stu[i].math, my_stu[i].compu, my_stu[i].avg);
        printf("\n");
    }
    puts("");

}

void bubble(struct student my_stu[SIZE])
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
            if (my_stu[i].avg < my_stu[i + 1].avg) {
                temp = my_stu[i];
                my_stu[i] = my_stu[i + 1];
                my_stu[i + 1] = temp;
            }
        }
    }
}