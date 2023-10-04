// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int main()
{
	double score = 0.0;
	double high = 0.0;
	double low = 0.0;
	double save = 0.0;
	int num = 0;
	int start = 1;
	while (score>=0)
	{

		scanf_s("%lf", &score);

		if (start > 0)
			low = score;

	    start = 0;
		save += score;
		num += 1;

		  if (score > high)
		    high = score;
		  else if (score < low and score >0)
			low = score;
	}

	save -= score;
	num -= 1;

	double avg = save / num;
	printf("%f\n",avg);
	printf("%f\n", high);
	printf("%f\n", low);
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
