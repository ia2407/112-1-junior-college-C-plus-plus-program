// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[][4]);
int main(void)
{
    // initialize a
    int a[SIZE][4] = { {1,55,54,0},{2,25,74,0},{3,85,30,0},{4,98,44,0},
        {5,77,63,0},{6,91,74,0},{7,98,65,0},{8,22,97,0},{9,49,78,0},{10,85,61,0} };
    puts("Data items in original order");
    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }
    bubble(a);
    puts("\nData items in ascending order");
    // output sorted array
    printf("\n%4s %4s %4s %4s", "學號", "數學", "計概", "平均");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n%4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])
{
    unsigned int pass;
    // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) 
    {

        // loop to control number of comparisons per pass   
        for (size_t i = 0; i < SIZE - 1; ++i)
        {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i][3] < array[i + 1][3])
            {
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