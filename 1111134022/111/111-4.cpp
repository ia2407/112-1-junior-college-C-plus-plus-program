#include <stdio.h>
int reward(int p, int aims, double r)
{
	int i = 0;
	while (p < aims)
	{
		p += p * r;
		i += 1;
	}
	return i;
}

int main()
{
	int money, aims, result;
	double r = 0.05;

	printf("請輸入本金\n");
	scanf_s("%d", &money);

	printf("請輸入存款目標\n");
	scanf_s("%d", &aims);

	result = reward(money, aims, r);

	printf("至少需要%d年", result);

}