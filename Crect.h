#ifndef CRECT_H
#define CRECT_H

class Crect
{
private:
    const double xL, yL, xR, yR;
public:
    Crect(double _xL, double _yL, double _xR, double yR); 
	void cross(const Crect &b);
};


#endif
