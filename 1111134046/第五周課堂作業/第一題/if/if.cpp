// if.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
// Fig. 4.7: fig04_07.c
// Counting letter grades with switch
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int grade; // one grade 
    unsigned int aCount = 0; // number of As
    unsigned int bCount = 0; // number of Bs
    unsigned int cCount = 0; // number of Cs
    unsigned int dCount = 0; // number of Ds
    unsigned int fCount = 0; // number of Fs

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");

        // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF)
    {
        // determine which grade was input  
        if (grade == 'a'|| grade == 'A')
        {
            ++aCount;
        }
        else if (grade == 'b' || grade == 'B')
        {
            ++bCount;
        }
        else if (grade == 'c' || grade == 'C')
        {
            ++cCount;
        }
        else if (grade == 'd' || grade == 'D')
        {
            ++dCount;
        }
        else if (grade == 'f' || grade == 'F')
        {
            ++fCount;
        }
        else if (grade == '\n' || grade == '\t' || grade == ' ')
        {

        }
        else
        {
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
        }
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount); // display number of A grades
    printf("B: %u\n", bCount); // display number of B grades
    printf("C: %u\n", cCount); // display number of C grades
    printf("D: %u\n", dCount); // display number of D grades
    printf("F: %u\n", fCount); // display number of F grades
} // end function main

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
