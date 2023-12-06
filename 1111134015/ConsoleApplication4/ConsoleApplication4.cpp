#include <stdio.h>

// 排序副程式
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交換元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 二元搜尋副程式
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // 找不到
}

int main() {
    int arr[10];
    // 輸入數字
    printf("請輸入10個數字：\n");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
    }

    // 排序
    bubbleSort(arr, 10);

    // 印出排序後的結果
    printf("排序後的結果：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 輸入欲查找的值
    int key;
    printf("請輸入欲查找的值：\n");
    scanf_s("%d", &key);

    // 二元搜尋
    int result = binarySearch(arr, 0, 9, key);

    // 印出結果
    if (result != -1) {
        printf("找到值 %d 在陣列中的位置：%d\n", key, result);
    }
    else {
        printf("找不到\n");
    }

    return 0;
}