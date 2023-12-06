#include <stdio.h>
#define SIZE 10


void bubble(int array[SIZE]);
int binarySearch( int b[], int searchKey, int low, int high);
int main(void)
{
    
    int a[SIZE], key=1,result;
    puts("Data items in original order");
    
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

    while (key!=0)
    {
        printf("\n請輸入你要搜尋的整數");
        scanf_s("%d", &key);
        result = binarySearch(a, key, 0, SIZE - 1);
        if (result != -1)
        {
            printf("你要找的%d在陣列a[]中第%d個元素", key, result);
        }
        else
        {
            printf("你要找的%d不在陣列a[]中", key);
        }
    }
   

}



int binarySearch( int b[], int searchKey, int low, int high)
{
    
    while (low <= high) {

        
        int middle = (low + high) / 2;

        
        if (searchKey == b[middle]) 
        {
            return middle;
        }

        
        else if (searchKey < b[middle])
        {
            high = middle - 1; 
        }

        
        else
        {
            low = middle + 1;        
        }
    } 

    return -1; 
}




void bubble(int array[SIZE])
{
    unsigned int pass;
    // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (int i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}