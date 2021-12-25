#include <iostream>
#include <cstdlib>
#include "FIFOLIFO.h"
 
using namespace std;

int main()
{
   
   int N;
   int chislo;
   cout<<"VVedite colichestvo chisel: ";
   cin >> N;  
   //LIFO conta(N);
   FIFO conta(N);
   DataStructure &rParent = conta;
   for(int i = 1; i <= N ; i++)
   {
       //LIFO conta(i);
       FIFO conta(i);
	   cin>>chislo;
	   rParent.push(i, chislo);
	   rParent.print();
    }
    for(int i = 0; i < N ; i++)
	{
	    //rParent.pop(N - i - 1);
	    rParent.pop(0);
		rParent.print();
	}
	
   system("pause");
   return 0;
}
