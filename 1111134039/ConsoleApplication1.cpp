#include <stdio.h>
#define SIZE 10

// function main begins program execution
int binarySearch(const int b[], int searchKey, int low, int high);
void bubble(int array[SIZE]);
int main(void)
{

    int a[SIZE], key = 1, result;
    puts("輸10個數");

    for (int i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    bubble(a);
    puts("\nData items in ascending order");

    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
    while (key != -1)
    {
        printf("\n搜尋的數");
        scanf_s("%d", &key);
        result = binarySearch(a, key, 0, SIZE - 1);
        if (result != -1) {
            printf("你找的%d在a[]中第%d個", key, result + 1);
        }
        else
        {
            printf("你找的%d不在a[]", key);
        }
    }
}

void bubble(int array[SIZE])
{
    unsigned int pass;

    for (unsigned int pass = 1; pass < SIZE; ++pass) {


        for (int i = 0; i < SIZE - 1; ++i) {

            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}
int binarySearch(const int b[], int searchKey, int low, int high)
{

    while (low <= high) {


        int middle = (low + high) / 2;



        if (searchKey == b[middle]) {
            return middle;
        }


        else if (searchKey < b[middle]) {
            high = middle - 1;
        }


        else {
            low = middle + 1;
        }
    }
    return -1;
}