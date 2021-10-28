#include <iostream>
#include "FIFO.h"

int main()
{
	int N;
	cout<<"VVedite colichestvo chisel: ";
	cin >> N;
	FIFO mas(N);
	mas.push();
	mas.pop();
	system("pause");
    return 0;
}
