#include <iostream>

int main()
{
    float N;
    int b;
    int k = 0;
    float eps = 0.00001;
    std::cout<<"VVedite chislo\n";
    std::cin >> N;
    b = int(N);
    float h;
    h = float(b);
    if ((b < 1)  or ((N - h) > eps) or (b > 100))
    {
        std::cout<<"mistake\n";
    }
    else
    {
        int a = 1;
        int b = 1;
        int c;
        std::cout<<a;
        std::cout<<" ";
        std::cout<<b;
        std::cout<<" ";
        N = N - 2;
        while(N != 0)
        {
            c = a + b;
            std::cout<<c;
            std::cout<<" ";
            a = b; 
            b = c;
            N = N - 1;
        }
    }

    return 0;
}
