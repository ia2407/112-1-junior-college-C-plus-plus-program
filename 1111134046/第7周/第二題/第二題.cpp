// 第二題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>

float abcd(int x)
{   float pi = 0, a = 1; 
    int c = 1;
    for (int i = 1; i <= x; i++)
    {         
     pi += 4 / a * c;
     a += 2;
     c = c * -1; 
    }    
     return pi;
}
int main()
{   
    int b = 0;
    scanf_s("%d", &b);  
    printf("\n%f", abcd(b));
}


