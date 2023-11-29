#include <stdio.h>
#define SIZE 10
void bubble(int arr[SIZE], unsigned int v);

int main(void)
{
    //輸入幾個
    int a[SIZE],num;
    printf("請輸入你想要排序幾個值");
    scanf_s("%d", &num);
    //輸入幾個值
    for (int i = 0; (i < num)&&(i < SIZE); i++) {
        printf("請輸入一個值");
        scanf_s("%d",&a[i]);
    }
    //印出原本的陣列
    puts("Data items in original order");

    for (size_t i = 0; i < num; ++i) {
        printf("%4d", a[i]);
    }
                 
    bubble(a, num);//副程式排序

    //印出排序後的陣列
    puts("\nData items in ascending order");

    for (size_t i = 0; i < num; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}


void bubble(int arr[SIZE], unsigned int v) 
{
    for (unsigned int pass = 1; pass < v; ++pass) {

        for (size_t i = 0; i < v - 1; ++i) {

            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}