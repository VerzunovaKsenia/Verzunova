#include "CSlice.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

Slice::Slice(string &sl)
{
    arr = new int[100];
   
    ifstream f("slice.txt");
    
    int N = 0;
    
    while(!f.eof())
    {
        ++N;
        f >> arr[N - 1];
    }
    
    f.close();
    
    size = N;
    
    stringstream ss(sl);
    
	getline(ss,strt,':');
    getline(ss,stp,':');
    getline(ss,stepch,':');
    
    colon = sl.find(":");
    
}

Slice::~Slice()
{
    delete[] arr;
}

void Slice::fun()
{
    int start, stop, step;
    
	if(strt.empty())
    {
        start = 0;
    }
    else
    {
        start = stoi(strt);
    }
    
	if(stp.empty() && stepch.empty() && start != 0 && colon == -1) // [2] 
    {
        if(start > 0)
		{
			cout << arr[start] << " ";
		}
        if(start < 0)
		{
			cout << arr[size - abs(start)];
        }
    }
    else
    {
        if(stp.empty()) 
        {
            stop = size;
        }
        else
        {
            stop = stoi(stp);
        }
        
		if(stepch.empty())
        {
            step = 1;
        }
        else
        {
            step = stoi(stepch);
        }

        if(start >= 0 && stop >= 0 && step >= 0) // [2:6:1] 
        {
            for(int i = start; i <= stop - 1; i+=step)
            {
                cout << arr[i] << " ";
            }
			cout << "\n";
        }
        
		if(start <= 0 && stop >= 0 && step >= 0) // [-7:8:1]
        {
            for(int i = size - abs(start); i <= stop - 1; i+=step)
            {
                cout << arr[i] << " ";
            }
			cout << "\n";
        }
        
		if(start >= 0 && stop >=0  && step < 0) // [4:2:-1]
        {
            if(start == 0 && stop == size)
            {
                for(int i = size - 1; i >= start; i-=abs(step))
            {
                cout << arr[i] << " ";
            }
            }
			if(start == 0 && stop != size)
            {
                for(int i = size - 1; i > stop; i-=abs(step))
            {
                cout << arr[i] << " ";
            }
            }
            else
            {
                for(int i = start; i >= stop + 1; i-=abs(step))
                {
                    cout << arr[i] << " ";
                }
            }
			cout << "\n";
        }
        
		if(start < 0 && stop >= 0 && step < 0) // [-1:6:-1]
        {
            for(int i = size - abs(start); i >= stop + 1; i-=abs(step))
            {
                cout << arr[i] << " ";
            }
			cout << "\n";
        }
        
		if(start >= 0 && stop <= 0 && step >= 0) // [2:-3:1]
        {
            for(int i = start; i < size - abs(stop); i+=step)
            {
                cout << arr[i] << " ";
            }
			cout << "\n";
        }
        
		if(start <= 0 && stop <= 0 && step <= 0) // [-1:-3:-1]
        {
            for(int i = size - abs(start); i > size - abs(stop); i-=abs(step))
            {
                cout << arr[i] << " ";
            }
			cout << "\n";
        }
        
		if(start <= 0 && stop <= 0 && step >= 0) //[-3:-1:1]
        {
            for(int i = size - abs(start); i < size - abs(stop); i+=step)
            {
                cout << arr[i] << " ";
            }
			cout << "\n";
        }
        
    }
    
}
