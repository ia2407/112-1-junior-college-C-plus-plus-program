// switch.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
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
    while ((grade = getchar()) != EOF) {

        // determine which grade was input
        switch (grade) { // switch nested in while

        case 'A': // grade was uppercase A
        case 'a': // or lowercase a
            ++aCount; // increment aCount
            break; // necessary to exit switch

        case 'B': // grade was uppercase B
        case 'b': // or lowercase b
            ++bCount; // increment bCount
            break; // exit switch

        case 'C': // grade was uppercase C
        case 'c': // or lowercase c
            ++cCount; // increment cCount
            break; // exit switch

        case 'D': // grade was uppercase D
        case 'd': // or lowercase d
            ++dCount; // increment dCount
            break; // exit switch

        case 'F': // grade was uppercase F
        case 'f': // or lowercase f
            ++fCount; // increment fCount
            break; // exit switch

        case '\n': // ignore newlines,
        case '\t': // tabs,
        case ' ': // and spaces in input
            break; // exit switch

        default: // catch all other characters
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            break; // optional; will exit switch anyway
        } // end switch
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
