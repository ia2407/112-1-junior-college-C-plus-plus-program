#include <iostream>
#include <cmath>

int reward(int p, double r, int aim) {
    int years = 0;
    while (p < aim) {
        p += p * r;
        years++;
    }
    return years;
}

int main() {
    int p = 10000;
    double r = 0.05;
    int aim;

    std::cout << "Enter the deposit goal: ";
    std::cin >> aim;

    int years = reward(p, r, aim);
    std::cout << "It will take " << years << " years to reach the deposit goal." << std::endl;

    return 0;
}
