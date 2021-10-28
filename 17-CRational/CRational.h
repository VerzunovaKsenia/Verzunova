#ifndef CRational_H
#define CRational_H
 
class CRational
{
   
public:

	const int m_num;
    const int m_denom;

    CRational(int num, int denom);
 
    void print();
	void sum(const CRational &b);
	void mult(const CRational &b);
	void reduction(int num, int denom);
	void check(int num, int denom);
	int gcd(int num, int denom);
};
 
#endif