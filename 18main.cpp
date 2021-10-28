#include <iostream>
#include <fstream>
#include <string>
#include "Crect.h"

int main()
{
	using namespace std;

	ifstream f("coordinates.txt");
	int xl1, yl1, xr1, yr1, xl2, yl2, xr2, yr2;
    f >> xl1 >> yl1 >> xr1>> yr1 >> xl2 >> yl2 >> xr2 >> yr2;
	Crect rect1(xl1, yl1, xr1, yr1), rect2(xl2, yl2, xr2, yr2);
	rect1.cross(rect2);
	system("pause");
	return 0;
}
