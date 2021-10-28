#ifndef FIFO_H
#define FIFO_H
#include<iostream>
#include<cstdlib>

using namespace std;

class FIFO
{
private:
    int* array;
    int N;
    void Create() {
        array = new int[N];
    }
 
public:

    FIFO(int size);
    ~FIFO();


	void push();
	void pop();

};

#endif
