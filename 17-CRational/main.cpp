#include <iostream>
#include "CRational.h"

int main()
{
	CRational drob1(23,3); 
	CRational drob2(9,8);
        drob1.sum(drob2);
        drob1.mult(drob2);
	system("pause");
    return 0;
}

