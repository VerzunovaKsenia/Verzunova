#include "FIFOLIFO.h"
#include <iostream>

using namespace std;


DataStructure::DataStructure(int l)
{
  size = l;
  container = (int*) malloc(size*sizeof(int));
}

DataStructure::~DataStructure()
{
    delete[] container;
}

void DataStructure::push(int p, int k)
{
    
	cout<<"Dobavleno: "<<k<<"\n";
    container[p - 1] = k;

}


void DataStructure::print()
{
    cout<<"container: ";
	for(int i = 0; i < size ; i++)
	{
		cout<<container[i]<<" ";
	}
	cout<<"\n";

}

void DataStructure::pop(int chislo) {}

LIFO::LIFO(int N):DataStructure(N)
{
}


void LIFO::pop(int chislo)
{
	cout<<"pop: "<<container[chislo]<<" ";
	cout<<"\n";
	--size;
}

FIFO::FIFO(int N):DataStructure(N)
{
}


void FIFO::pop(int chislo)
{
	cout<<"pop: "<<container[chislo]<<" ";
	cout<<"\n";
	for(int i = 0; i < size - 1; i++)
	{
	    container[i] = container[i + 1];
	}
	--size;
}

