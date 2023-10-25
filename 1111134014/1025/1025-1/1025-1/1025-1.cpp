#include <iostream>
#include<stdio.h>

int a();//副程式原型宣告
int b();
int c();
int d();

int a(int i){
	//a 正三角 副程式 , i是直的 , j是橫的
	 int j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//b 倒三角 i是直的 , j是橫的
int b(int i)  {
	int j;
	for (i = 1; i <= 10; i++)
	{
		for (j = i; j <= 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//c 空格正三角,用空格推 i,j是空格,e是星星
int c(int i)  {
	int e;
	int j;
	
	for (i = 0; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (e = 1; e <= 10 - i; e++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	//d 空格倒三角
int d(int i){
	int j;
	int e;
	
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10 - i; j++)
		{
			printf(" ");
		}
		for (e = 1; e <= i; e++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	
int main()//主程式

{
	int i=1,u=1,w=1,y=1;
	printf("請輸入值");
	scanf_s("%d", u);
	a(u);
	printf("請輸入值");
	scanf_s("%d", w);
	b(w);
	printf("請輸入值");
	scanf_s("%d", y);
	c(y);
	printf("請輸入值");
	scanf_s("%d", i);
	d(i);
	

	

	



}
