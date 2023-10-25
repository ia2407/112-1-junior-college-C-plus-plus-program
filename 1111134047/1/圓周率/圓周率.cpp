

#include <iostream>

int play(int times)
{
	int hehe;
	double a, b, d, e = 4;
	for (a = 2; a <= times; a++)
	{
		d = e;
		b = (a * 2) - 1;
		hehe = a;
		if (hehe % 2 == 0)
		{
			e = d - (4 / b);
		}
		else
		{
			e = d + (4 / b);
		}
		printf("%lf\n", e);
	}
	return e;
}
int main()
{
	int a;
	printf("請輸入次數:");
	scanf_s("%d",&a);
	play(a);
}


