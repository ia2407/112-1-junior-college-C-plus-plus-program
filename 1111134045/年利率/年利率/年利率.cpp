

#include <iostream>
int goal,year=0;
double principal = 1000.0;
double a= 1.05;
int main()
{
	printf("請輸入目標:");
	scanf_s("%d" , &goal);
	while (principal<goal)
	{
		principal = principal * a;
		year++;
	}
	printf("所需年限是:%d",year);
}


