#include "FIFO.h"
#include <iostream>

using namespace std;

void FIFO::push()
{
	    int k;
		cout<<"Pomestite chisla v container:\n";
		for (int i = N - 1; i >= 0; i--)
		{
			cin>>k; 
			array[i] = k;
		}
		cout<<"container ";
		for(int i = 0; i < N; i++)
		cout<<array[i]<<" ";
		cout<<"\n";
}


void FIFO::pop()
{
	cout<<"FIFO: ";
	for (int i = N - 1; i >= 0; i--)
	{
		cout << array[i]<<" ";
	}
	cout<<"\n";

	cout<<"LIFO: ";
	for (int i = 0; i < N; i++)
	{
		cout << array[i]<<" ";
	}
	cout<<"\n";

}

FIFO::FIFO(int size): N(size) 
{ 
	Create(); 
}


FIFO::~FIFO()
{
	delete[] array;
}
