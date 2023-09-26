// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
	int val, val2, sum, sum2, sum3, sum4, sum5;
	val = 6;
	val = 8;
	sum = val + val2;
	sum2 = val - val2;
	sum3 = val * val2;
	sum4 = val / val2;
	sum5 = val % val2;
	printf("%d加上%d的和%d\n", val, val2, sum);
	printf("%d減%d的差%d\n", val, val2, sum2);
	printf("%d乘%d的積%d\n", val, val2, sum3);
	printf("%d除%d的商%d\n", val, val2, sum4);
	printf("%d除%d的餘數%d\n", val, val2, sum5);
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
