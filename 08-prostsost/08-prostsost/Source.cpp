#include <iostream>
#include <ctime>

int main()
{
    float N;
    int b;
    int k = 0;
    float eps = 0.00001;
    std::cin >> N;
    b = int(N);
    float h;
    h = float(b);
    if ((b <= 0)  or ((N - h) > eps))
    {
        std::cout<<"oshibka\n";
    }
    else
    {
        for (int i = 2; i <= b/2; i++)
        {
            if (b % i == 0)
            {
                k = k + 1;
                break;
            }
        }   
        if (k > 0)
        {
            std::cout<<"sostavnoe\n";
        }
        else
        {
            std::cout<<"prostoe\n";
        }
    }
    //std::cout << "runtime = " << clock()/1000.0 ;
	
    return 0;
}
