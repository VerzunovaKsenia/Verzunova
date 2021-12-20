#include "CSlice.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	cout << "Enter slice: ";
	string sl;
	cin >> sl;
	
	int first = sl.find("[");
	int last = sl.find("]");

	sl.erase(last, last + 1);
	sl.erase(first, first + 1);

	
	//stringstream ss(slice);
    
	//string strt,stp,stepch;
    
	//getline(ss,strt,':');
    //getline(ss,stp,':');
    //getline(ss,stepch,':');
    
    //int colon = slice.find(":");
	
    Slice obj(sl);
	
	obj.fun();
	system("pause");
	return 0;
}
