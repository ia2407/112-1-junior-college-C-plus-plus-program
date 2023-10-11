#include <iostream>
#include <stdio.h>
int main(void)
{
    int grade;
    int ac = 0;
    int bc = 0;
    int cc = 0;
    int dc = 0;
    int ec = 0;
    int fc = 0;
    std::cout << "輸入英文";
    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
        case 'A':
            ++ac;
            break;
        case 'a':
            ++ac;
            break;
        case 'B':
            ++bc;
            break;
        case 'b':
            ++bc;
            break;
        case 'C':
            ++cc;
            break;
        case 'c':
            ++cc;
            break;
        case 'D':
            ++dc;
            break;
        case 'd':
            ++dc;
            break;
        case 'E':
            ++ec;
            break;
        case 'e':
            ++ec;
            break;
        case 'F':
            ++fc;
            break;
        case 'f':
            ++fc;
            break;
        case '\n':
        case '\t':
        case ' ':


        default:
            break;
        }

    }
    std::cout << "a的數量" << ac << "\n";
    std::cout << "b的數量" << bc << "\n";
    std::cout << "c的數量" << cc << "\n";
    std::cout << "d的數量" << dc << "\n";
    std::cout << "e的數量" << ec << "\n";
    std::cout << "f的數量" << fc << "\n";
}