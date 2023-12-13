#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[][4]);
int main(void)
{
    // initialize a
    int a[SIZE][4] = { {1,77,68,0},{2,73,64,0},{3,79,88,0},
        {4,67,78,0},{5,71,63,0},{6,67,87,0},
        {7,87,98,0},{8,97,66,0},{9,67,60,0},{10,81,69,0} };
    puts("Data items in original order");
    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }
    bubble(a);
    puts("\nData items in ascending order");
    printf("\n %4s %4s %4s %4s", "學號", "數學", "計概", "平均");
    // output sorted array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n %4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])
{
    unsigned int pass;
    // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {
        //控制排序過程中的遍歷次數，總共執行 SIZE - 1 次
        // loop to control number of comparisons per pass   
        for (size_t i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i][3] < array[i + 1][3]) {
                int hold = array[i][0];
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
