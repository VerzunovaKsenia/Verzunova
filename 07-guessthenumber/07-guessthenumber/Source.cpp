#include <iostream>
int main() {
    int i; 
    int N;
    int a = 1;
    int b = 100;
    std::cout << "Задумайте число N от 1 до 100, а я угадаю!\n";
    std::cout << "N больше 50 (1 да, 2 нет, 3 равно) ?\n";
    std::cin >> i;
    while (i != 3)
    {
        if (i == 1)
        {
            a = (a + b) / 2;
            N = (a + b) / 2;
            std::cout << "N больше" << N << "(1 да, 2 нет, 3 равно) ? \n";
            std::cin >> i;
        }
        else
        {
            b = (a + b) / 2;
            N = (a + b) / 2;
            std::cout << "N больше" << N << "(1 да, 2 нет, 3 равно) ? \n";
            std::cin >> i;
        }
    }
    std::cout << N ;
    return 0;
}