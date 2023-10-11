// ConsoleApplication7.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main(void)
{
    int grade;
    int ac = 0;
    int bc = 0;
    int cc = 0;
    int dc = 0;
    int ec = 0;
    int fc = 0;
    std::cout << "輸入英文";
    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
        case 'A':
            ++ac;
            break;
        case 'a':
            ++ac;
            break;
        case 'B':
            ++bc;
            break;
        case 'b':
            ++bc;
            break;
        case 'C':
            ++cc;
            break;
        case 'c':
            ++cc;
            break;
        case 'D':
            ++dc;
            break;
        case 'd':
            ++dc;
            break;
        case 'E':
            ++ec;
            break;
        case 'e':
            ++ec;
            break;
        case 'F':
            ++fc;
            break;
        case 'f':
            ++fc;
            break;
        case '\n': 
        case '\t': 
        case ' ': 
            

            default:
            break;
        }

    }
    std::cout << "a的數量" << ac << "\n";
    std::cout << "b的數量" << bc << "\n";
    std::cout << "c的數量" << cc << "\n";
    std::cout << "d的數量" << dc << "\n";
    std::cout << "e的數量" << ec << "\n";
    std::cout << "f的數量" << fc << "\n";
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
