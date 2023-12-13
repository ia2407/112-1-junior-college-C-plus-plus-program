#include <stdio.h>
#define SIZE 10


void bubble(int array[][4]);
int hold;
int main(void)
{

    int a[SIZE][4] = { {1,95,75,45},{2,93,81,38},{3,100,45,15},{4,78,75,72},{5,94,55,27},{6,14,5,86},{7,17,99,47},{8,100,81,37},{9,83,66,93},{10,93,54} };
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    
    }
    bubble(a);
    puts("\nData items in ascending order");
    printf("\n%4s %4s %4s %4s","學號","數學","計慨","平均");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n%4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[SIZE][4])
{
    unsigned int pass;
                   
    for (unsigned int pass = 1; pass < SIZE; ++pass) {
  
        for (size_t i = 0; i < SIZE - 1; ++i) {           
            if (array[i][3] < array[i + 1][3]) {

                 hold = array[i][0];
                array[i][0] = array[i + 1][0];
                array[i + 1][0] = hold;

                hold = array[i][1];
                array[i][1] = array[i + 1][1];
                array[i + 1][1] = hold;

                hold = array[i][2];
                array[i][2] = array[i + 1][2];
                array[i + 1][2] = hold;

                hold = array[i][3];
                array[i][3] = array[i + 1][3];
                array[i + 1][3] = hold;
            }
        }
    }
}