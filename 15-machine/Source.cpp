#include <iostream>

int main()
{
    float mnol(0.1);
    float n(0.1);
    double mnol1(0.1);
    double n1(0.1);
    int d = 0;
    float m(1.0);
    float x(0.9);
    double m1(1.0);
    double x1(0.9);
    float l(1.0);
    double l1(1.0);
    long double mnol2(0.1);
    long double	 n2(0.1);
    long double x2(0.9);
    long double m2(1.0);
    long double l2(1.0);
    int k = 0;
    
    
    double eps_d(1.0);
    float eps_f(1.0);
    long double eps_l(1.0);

    while (double(1.0) + eps_d > double(1.0))
    {
        eps_d = eps_d / double(2.0);
    }
    while (float(1.0) + eps_f > float(1.0))
    {
        eps_f = eps_f / float(2.0);
    }
    while (long double(1.0) + eps_l > long double(1.0))
    {
        eps_l = eps_l / long (2.0);
    }
    while(n > 0)
    {
        n = n / 2;
        ++d;
    }
    while(d != 1)
    {
        mnol = mnol / 2;
        d = d - 1;
    }
    d = 0;
    while(n1 > 0)
    {
        n1 = n1 / 2;
        ++d;
    }
    while(d != 1)
    {
        mnol1 = mnol1 / 2;
        d = d - 1;
    }
    d = 0;
    while(n2 > 0)
    {
        n2 = n2 / 2;
        ++d;
    }
    while(d != 1)
    {
        mnol2 = mnol2 / 2;
        d = d - 1;
    }
    while(m != x)
    {
        x = m;
        m = m*2.0;
        ++k;
    }

    while (k != 2)
    {
        k = k - 1;
        l = l * 2.0;
    }
    k = 0;
    while(m1 != x1)
    {
        x1 = m1;
        m1 = m1 * 2.0;
        ++k;
    }

    while (k != 2)
    {
        k = k - 1;
        l1 = l1 * 2.0;
    }
    k = 0;
    while(m2 != x2)
    {
        x2 = m2;
        m2 = m2 * 2.0;
        ++k;
    }

    while (k != 2)
    {
        k = k - 1;
        l2 = l2 * 2.0;
    }
    std::cout<<"Machine null (type long double) equals: " <<mnol2<<"\n";
    std::cout<<"Machine null (type double) equals: " <<mnol1<<"\n";
    std::cout<<"Machine null (type float) equals: " <<mnol<<"\n";
    std::cout << "Machine epsilon (type long double) equals: " << eps_l << "\n";
    std::cout << "Machine epsilon (type double) equals: " << eps_d << "\n";
    std::cout << "Machine epsilon (type float) equals: " << eps_f << "\n";
    std::cout <<  "Machine inf (type long double) equals: "<<l2<<"\n" ;
    std::cout <<  "Machine inf (type double) equals: "<<l1<<"\n" ;
    std::cout <<  "Machine inf (type float) equals: "<<l*2.0<<"\n" ;
    std::cout <<  "Machine -inf (type long double) equals: "<<-l2<<"\n" ;
    std::cout <<  "Machine -inf (type double) equals: "<<-l1<<"\n" ;
    std::cout << "Machine -inf (type float) equals: "<<-l*2.0<<"\n";
    std::cout << "Raznica " << - mnol + eps_f<<"\n";
	system("pause");
    return 0;
}
