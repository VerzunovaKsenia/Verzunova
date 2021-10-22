#include "Crect.h"
#include <iostream>

Crect::Crect(double _xL, double _yL, double _xR, double _yR)
	:xL(_xL), yL(_yL), xR(_xR), yR(_yR)
{
}

void Crect::cross(const Crect &b)
{
	int count = 0;
	if (b.xL <= xL && xL <= b.xR && b.yL <= yL && yL <= b.yR )
		count = count + 1;
	if  (b.xL <= xR && xR <= b.xR && b.yL <= yR && yR <= b.yR )
		count = count + 1;
	if  (b.xL <= xL && xL <= b.xR && b.yL <= yR && yR <= b.yR )
		count = count + 1;
	if  (b.xL<= xR && xR <= b.xR && b.yL <= yL && yL <= b.yR )
		count = count + 1;
	if ((1 <= count && count <= 3) || (xL == b.xL && xR == b.xR && yL == b.yL && yR == b.yR))
		std::cout<<"intersect"<< "\n";
	else
		std::cout<<"not intersect"<< "\n";
}
