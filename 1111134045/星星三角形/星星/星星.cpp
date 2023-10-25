
#include <iostream>

int main()
{
	for (int a = 0; a<=10 ; a++)
	{
		for (int b = 0; b< a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int a = 10; a >=0; a--)
	{
		for (int b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int a = 10; a >= 0; a--)
	{
		for (int c = 0; c<10-a; c++)
		{
			printf(" ");
		}
		for (int b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int a = 0; a <= 10; a++)
	{
		for (int c = 10; c > a; c--)
		{
			printf(" ");
		}
		for (int b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
}

