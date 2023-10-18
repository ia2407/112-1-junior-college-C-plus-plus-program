﻿// Fig. 4.7: fig04_07.c
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
        if (grade == 'A' || grade == 'a')
        {
            ++aCount;
        }
        else  if (grade == 'B' || grade == 'b')
        {
            ++bCount;
        }
        else  if (grade == 'C' || grade == 'c')
        {
            ++cCount;
        }
        else  if (grade == 'D' || grade == 'd')
        {
            ++dCount;
        }
        else  if (grade == 'F' || grade == 'f')
        {
            ++fCount;
        }
        else if (grade == '/n' || grade == '\t' || grade == ' ') {
        }
        {
            //printf("%s", "inorrect letter grade entered");
            //puts("enter a new grade");
        }
    }    
        puts("\nTotals for each letter grade are:");
        printf("A: %u\n", aCount);
        printf("B: %u\n", bCount);
        printf("C: %u\n", cCount);
        printf("D: %u\n", dCount);
        printf("F: %u\n", fCount);
    }


/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
