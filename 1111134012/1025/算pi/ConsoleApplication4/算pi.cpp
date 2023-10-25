
#include <iostream>
#include <stdio.h>
double one();

double one(double a) {
	double result = 4.0;
	for (int i = 2; i <= a; i++) {//計數變數初始化;條件判斷;遞增
		printf("%lf\n", result);
		if (!(i % 2))//imod2餘數=0的話re=0(偶數)餘數=1re=1(奇數)
			result -= 4.0 / (i * 2 - 1);//(re=1)
		else result += 4.0 / (i * 2 - 1);//(re=0)

	}printf("%lf\n", result);
	return 0;
}

int main()
{
	int value ;
	printf("please input the number of terms:");
	scanf_s("%d", &value);//&是用來取得變數value的記憶體位址
	one(value);
}


