
#include <iostream>
#include <stdio.h>

char one();
char two();
char thr();
char fou();
char one(int a) {
	for (int c = 1; c <= a; c++) {
		for (int b = 1; b <= c; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
char two(int a) {
	for (int c = 1; c <= a; c++) {
		for (int b = c; b <= a; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
char thr(int a) {
	for (int t = 1; t <= a; t++) {
		for (int b = 1; b <= a - t; b++) {
			printf(" ");
		}
		for (int c = 1; c <= t; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
char fou(int a) {
	for (int r = 0; r <= a; r++) {
		for (int b = 1; b <= r; b++) {
			printf(" ");
		}
		for (int c = 1; c <= a - r; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int i;
	printf("輸入數值");
	scanf_s("%d", &i);
	one(i);

	int a;
	printf("輸入數值");
	scanf_s("%d", &a);
	two(a);

	int f;
	printf("輸入數值");
	scanf_s("%d", &f);
	thr(f);

	int q;
	printf("輸入數值");
	scanf_s("%d", &q);
	fou(q);
}

