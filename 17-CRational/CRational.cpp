#include "CRational.h"
#include <iostream>
#include <cassert>

using namespace std;


CRational::CRational(int num, int denom):m_num(num), m_denom(denom)
{
}

void CRational::sum(const CRational &b)
{
	int num = m_num*b.m_denom + b.m_num*m_denom;
    int denom = m_denom*b.m_denom;
	reduction(num,denom);
}
void CRational::mult(const CRational &b)
{
	int num = m_num*b.m_num;
    int denom = m_denom*b.m_denom;
	reduction(num,denom);

}

void CRational::reduction(int num,int denom) 
{
	int a = gcd(num,denom);
    if (a != 1) 
	{

        num = num / a;
        denom = denom / a;
    }
	if(num >= denom)
	{
		int part = num / denom;
		num = num - (denom * part);
		cout << part <<" "<< num << "/" << denom << '\n';
	}
	else
	{
		int part = 0;
		cout << part <<" "<< num << "/" << denom << '\n';
	}
	
}

void CRational::check(int num, int denom)
{
    assert(denom != 0);
}

int CRational::gcd(int a, int b) 
	{
    while (b > 0) 
	{
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
    } 
