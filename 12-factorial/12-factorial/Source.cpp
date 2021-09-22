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
    if ((b <= 0)  or ((N - h) > eps) or (b >= 100000))
    {
        std::cout<<"mistake\n";
    }
    else
    {
        int f = N;
    while(N != 2)
    {
        f = f * (N - 1);
        N = N - 1;
    }
    std::cout<<f;
    }

    return 0;
}
