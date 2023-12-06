// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

// 排序副程式
void bubbleSort(int SIZE[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (SIZE[j] > SIZE[j + 1]) {
                // 交換元素
                int temp = SIZE[j];
                SIZE[j] = SIZE[j + 1];
                SIZE[j + 1] = temp;
            }
        }
    }
}

// 二元搜尋副程式
int binarySearch(int SIZE[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (SIZE[mid] == key)
            return mid;

        if (SIZE[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // 找不到
}

int main() {
    int SIZE[10];

    // 輸入學生學號
    printf("請輸入10位學生學號：\n");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &SIZE[i]);
    }

    // 排序
    bubbleSort(SIZE, 10);

    // 印出排序後的結果
    printf("排序後的結果：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", SIZE[i]);
    }
    printf("\n");

    // 輸入欲查找的值
    int key;
    printf("請輸入欲查找的值：\n");
    scanf_s("%d", &key);

    // 二元搜尋
    int result = binarySearch(SIZE, 0, 9, key);

    // 印出結果
    if (result != -1) {
        printf("找到值 %d 在陣列中的位置：%d\n", key, result);
    }
    else {
        printf("找不到\n");
    }

    return 0;
}
