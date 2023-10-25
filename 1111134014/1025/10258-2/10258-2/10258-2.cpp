#include<stdio.h>
int pi();//副程式原型宣告
double pi(int v) {//傳入整數,傳回雙精度浮點數
	int  i;//宣告v為整數,且初始值為1,宣告i為整數
	double re = 4.0;//宣告re為雙精度浮點數(64 bits)
	
	for (i = 2; i <= v; i++) {//迴圈(變數i,初始值=2,判斷i是否<=v,遞增)
		printf("%lf\n", re);//輸出(雙精度浮點數(long float)
		if (!(i % 2))
			re -= 4.0 / (i * 2 - 1);
		else
			re += 4.0 / (i * 2 - 1);
	}
	printf("%lf\n", re);
	return re;
}

int main()//主程式
{
	int a = 1;
	printf("輸入N");//輸出(提醒字串)
	scanf_s("%d", &a);//輸入(整數值,&用來取得變數a的記憶體位址)
	pi(a);//傳入整數型態
}