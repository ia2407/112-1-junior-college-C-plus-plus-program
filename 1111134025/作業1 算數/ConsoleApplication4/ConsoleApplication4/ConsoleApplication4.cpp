// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
    int a, b ,c ,d, e, f , g, hel;
    a = 12; //A=12
    b = 8; // B=8
    c = a + b; // c 是 a + b = 12 + 8 =20
    d = a - b; // c 是 a - b = 12 - 8 =12
    e = a * b; // c 是 a * b = 12 * 8 =96
    f = a / b; // c 是 a - b = 12 / 8 ="1"...4
    g = a % b; // c 是 a - b = 12 % 8 = 1 ..."4"
    printf("%d 和 %d 的和是 %d\n", a, b, c);
    printf("%d 和 %d 的差是 %d\n", a, b, d);
    printf("%d 和 %d 的積是 %d\n", a, b, e);
    printf("%d 和 %d 的商是 %d\n", a, b, f);
    printf("%d 和 %d 的餘是 %d\n", a, b, g);
    //std::cout << "Hello World!\n";
    return 0;
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
