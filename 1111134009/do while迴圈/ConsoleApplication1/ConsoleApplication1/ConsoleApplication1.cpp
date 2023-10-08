// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>

int main()
{
	double score;
	double total = 0.0;
	double high_score = -1.0, low_score = 101.0;
	int count = 0;
do{
		printf("請輸入學生成績(輸入負數結束): ");
		scanf_s("%lf", &score);
		
		if (score >=0)
		{
			total += score;
			count++;
			if (score > high_score){
				high_score = score;
			}

			if (score < low_score){
				low_score = score;
			}
		}
} while (score >= 0);

if (count > 0){
	double average = total / count;
	printf("平均成績: %.2lf \n", average);
	printf("最高成績: %.2lf \n", high_score );
	printf("最低成績: %.2lf \n", low_score);
}
else{
   printf("未輸入任何有效成績。 \n");
}

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
