#ifndef FIFOLIFO_H
#define FIFOLIFO_H
#include<iostream>
#include<cstdlib>



using namespace std;

class DataStructure
{
//private:

public:
    int* container;
    int size;
    

	
	DataStructure(int n);
	~DataStructure();
 
	void push(int n, int k);
    void print();
	virtual void pop(int chislo);

};

class LIFO: public DataStructure
{
public:
    LIFO(int N);
    virtual void pop(int chislo);
};

class FIFO: public DataStructure
{
public:
    FIFO(int N);
    virtual void pop(int chislo);
};



#endif
