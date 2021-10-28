#include <iostream>

int main() {
    int i; 
    int N;
	int k = 0;
    int a = 1;
    int b = 100;
    std::cout << "Zadumaite chislo ot 1 do 100!\n";
    std::cout << "N bolshe 50 (1 yes, 2 no, 3 equal) ?\n";
    std::cin >> i;
    while (i != 3)
    {
        if (i == 1)
        {
            a = (a + b) / 2;
            N = (a + b) / 2;
            std::cout << "N bolshe " << N << " (1 yes, 2 no, 3 equal) ? \n";
            std::cin >> i;
        }
        else
        {
            b = (a + b) / 2;
            N = (a + b) / 2;
            std::cout << "N bolshe " << N << " (1 yes, 2 no, 3 equal) ? \n";
            std::cin >> i;
        }
		k = k + 1;
    }
    std::cout << N <<"\n" ;
    std::cout << k <<"\n" ;
//system("pause");
    return 0;
}
