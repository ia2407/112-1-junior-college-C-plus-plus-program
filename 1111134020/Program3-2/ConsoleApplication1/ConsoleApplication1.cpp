// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>
int main()
{
	int  ave,score;
	int high = -1;// 初始化為負數以確保第一个輸入可以更新
	int low=101;// 初始化為大於100的數以確保第一个輸入可以更新
	int sum = 0;
	int count = 0;
	do
	{
		printf("請輸入學生成績(輸入負數即停止)==>");
		scanf_s("%d", &score);
		if (score >= 0) 
		{
			sum += score;//輸入的成績加到sum中
			count++;//增加了count的值,跟蹤輸入的成績數量
			if (score > high) 
			{
				high = score;
			}

			if (score < low) 
			{
				low = score;
			}
		}
	} while (score>0);

	if (count > 0)
	{
		double ave = (double)sum / count;
		printf("平均成績: %.2f\n", ave);
	}
	
	printf("最高成績: %d\n", high);
	printf("最低成績: %d\n", low);
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
