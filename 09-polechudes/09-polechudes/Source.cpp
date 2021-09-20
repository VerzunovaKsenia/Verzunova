#include <iostream>
#include <cstdlib>


int main()
{
    char slovo[] = "computer";
    const int numslovo = sizeof(slovo)/sizeof(slovo[0]);
    char *ugslovo = new char[numslovo - 1];
    char s[100];
    char a[10000];
    for (int i = 0; i < numslovo - 1; ++i)
        {
            ugslovo[i] = '-';
        }
    
        for(int i = 0; i < 9999; ++i)
        {
            std::cout<<"vvedite bukvu\n";
            std::cin>>s;
            for (int index = 0; index < numslovo - 1; ++index)
                {
                    if(s[0] == slovo[index])
                    {
                        ugslovo[index] = s[0];
                    }
                }
                for (int i = 0; i < numslovo - 1; ++i)
                    {
                        std::cout << ugslovo[i];
                    }
                std::cout<<"\n";
                int k = 0;
            for (int i = 0; i < numslovo - 1; ++i )
    {
        if(ugslovo[i] == slovo[i])
            {
                k = k + 1;
            }
            if (k == numslovo - 1)
            {
                std::cout<<"ugadali";
                exit(0);
            }
    }
        
        }
    return 0;
}
