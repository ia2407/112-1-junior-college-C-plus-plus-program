

#include <iostream>

// function main begins program execution
int main(void)
{
    int grade;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0; 

    puts("請輸入成績");
    puts("按Crtl+Z結束輸入");

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF) 
    {
            if (grade == 'a' || grade == 'A')
            {
                aCount++;
            }
            else if (grade == 'b' || grade == 'B')
            {
                bCount++;
            }
            else if (grade == 'c' || grade == 'C')
            {
                cCount++;
            }
            else if (grade == 'd' || grade == 'D')
            {
                dCount++;
            }
            else if (grade == 'f' || grade == 'F')
            {
                fCount++;
            }
            else if (grade == '\n' || grade == '\t' || grade == ' ') 
            {

            }
            else

            {
                printf("%s", "輸入錯誤成績");
                puts("\n請輸入一個新的成績");
            }
           
    } 
    // output summary of results
    puts("\n成績總計為:");
    printf("A: %u\n", aCount); // display number of A grades
    printf("B: %u\n", bCount); // display number of B grades
    printf("C: %u\n", cCount); // display number of C grades
    printf("D: %u\n", dCount); // display number of D grades
    printf("F: %u\n", fCount); // display number of F grades
} // end function main
