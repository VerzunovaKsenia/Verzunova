#include "FIGURE.h"
#include <iostream>

using namespace std;

int main()
{
    Circle circle(0,5,3);
    Square square(0,0,2);
   

	circle.move(1,2);
	circle.scale(2);
    circle.show();
    square.move(1,2);
    square.scale(2);
    square.rotate(90);
    square.show();

	system("pause");
    
    return 0;
}
