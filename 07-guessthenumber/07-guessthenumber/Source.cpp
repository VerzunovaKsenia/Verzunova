#include <iostream>
int main() {
    int i; 
    int N;
    int a = 1;
    int b = 100;
    std::cout << "��������� ����� N �� 1 �� 100, � � ������!\n";
    std::cout << "N ������ 50 (1 ��, 2 ���, 3 �����) ?\n";
    std::cin >> i;
    while (i != 3)
    {
        if (i == 1)
        {
            a = (a + b) / 2;
            N = (a + b) / 2;
            std::cout << "N ������" << N << "(1 ��, 2 ���, 3 �����) ? \n";
            std::cin >> i;
        }
        else
        {
            b = (a + b) / 2;
            N = (a + b) / 2;
            std::cout << "N ������" << N << "(1 ��, 2 ���, 3 �����) ? \n";
            std::cin >> i;
        }
    }
    std::cout << N ;
    return 0;
}