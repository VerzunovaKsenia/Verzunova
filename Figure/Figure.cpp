#include "FIGURE.h"
#include <iostream>
#include <cmath>

using namespace std;

FIGURE::FIGURE(float x, float y): xc(x), yc(y)
{
}
void FIGURE::move()
{
}
void FIGURE::rotate() 
{
} 
void FIGURE::scale() 
{
}
void FIGURE::show()
{
}

Circle::Circle(float x, float y, float r): FIGURE(x, y), radius(r)
{
}
void Circle::move(float deltax, float deltay) 
{
    xc = xc + deltax;
    yc = yc + deltay;
}
void Circle::scale(float size)
{
    radius = radius*size;
}
void Circle::show()
{
    cout << "Circle: centre (" << xc << "," << yc << "), r = " << radius << "\n";
}

Square::Square(float x, float y, float length): FIGURE(x, y), side(length), xv(xc + side/2),  yv(yc + side/2)
{
}
void Square::move(float deltax, float deltay) 
{
    xc = xc + deltax;
    yc = yc + deltay;
    xv = xv + deltax;
    yv = yv + deltay;
}
void Square::rotate(int alpha)
{
	double new_x, new_y, xxv, yyv, fi;
	fi = (alpha*acos(-1))/180;
    new_x = xv - xc;
    new_y = yv - yc;
    xxv = new_x * cos(fi) - new_y * sin(fi);
    yyv = new_x * sin(fi) + new_y * cos(fi);
	xv = xxv + xc;
	yv = yyv + yc;
}
void Square::scale(float size)
{
    side = side*size;
	xv = xc + side/2; 
	yv = yc + side/2;
}
void Square::show()
{
    cout << "Square: centre (" << xc << "," << yc << "), vertex (" << xv << "," << yv << ")\n";
}
