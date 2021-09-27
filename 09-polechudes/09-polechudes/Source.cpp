#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
	int N;
	char slovo[100];
	std::cin >> slovo;
	N = strlen(slovo);
    char *ugslovo = new char[N];
    char s[100];
    char *a = new char[26];
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'c';
    a[3] = 'd';
    a[4] = 'e';
    a[5] = 'f';
    a[6] = 'g';
    a[7] = 'h';
    a[8] = 'i';
    a[9] = 'j';
    a[10] = 'k';
    a[11] = 'l';
    a[12] = 'm';
    a[13] = 'n';
    a[14] = 'o';
    a[15] = 'p';
    a[16] = 'q';
    a[17] = 'r';
    a[18] = 's';
    a[19] = 't';
    a[20] = 'u';
    a[21] = 'v';
    a[22] = 'w';
    a[23] = 'x';
    a[24] = 'y';
    a[25] = 'z';
    
    //char *a = new char[26]{"abcdefghijklmnopqrstuvwxyz"};
    for (int i = 0; i < N; ++i)
        {
            ugslovo[i] = '-';
        }
    
        for(int i = 0; i < 9999; ++i)
        {
            std::cout<<"vvedite bukvu\n";
            std::cin>>s;
            int k = 0;
            if (strlen(s)>1)
            {
            for (int i = 0; i < N; ++i )
    {
        if(s[i] == slovo[i])
            {
                ugslovo[i] = s[i];
                k = k + 1;
            }
    }
            if (k == N)
            {
                std::cout<<"ugadali\n";
                exit(0);
            }
            else
            {
                std::cout<<"neugadali\n";
                exit(0);
            }
            }
            int o = 0;
            for(int i = 0; i < 26; ++i)
            {
                if(a[i] == s[0])
                {
                    a[i] = '!';
                }
                
                else
                {
                   o = o + 1;
                }
            }
            if(o != 25)
            {
                std::cout<<"bilo\n";
            }
          
                
            for (int index = 0; index < N; ++index)
                {
                    if(s[0] == slovo[index])
                    {
                        ugslovo[index] = s[0];
                    }
                }
                for (int i = 0; i < N; ++i)
                    {
                        std::cout << ugslovo[i];
                    }
                std::cout<<"\n";
                int l = 0;
            for (int i = 0; i < N; ++i )
    {
        if(ugslovo[i] == slovo[i])
            {
                l = l + 1;
            }
            if (l == N)
            {
                std::cout<<"ugadali\n";
                exit(0);
            }
    }
        
        }
    return 0;
}
