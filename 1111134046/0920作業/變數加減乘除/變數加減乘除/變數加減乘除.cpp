// 變數加減乘除.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

int main()
{
	int val1, val2,和,差,積,商,餘;
	val1 = 10;
	val2 = 3;
	和 = (val1 + val2);
	差 = (val1 - val2);
	積 = (val1 * val2);
	商 = (val1 / val2);
	餘 = (val1 % val2);
	printf("%d與%d的和為%d\n", val1, val2, 和);
	printf("%d與%d的差為%d\n", val1, val2, 差);
	printf("%d與%d的積為%d\n", val1, val2, 積);
	printf("%d與%d的商為%d\n", val1, val2, 商);
	printf("%d與%d的餘為%d\n", val1, val2, 餘);
   // std::cout << "Hello World!\n";
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
