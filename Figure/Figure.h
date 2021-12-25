#ifndef FIGURE_H
#define FIGURE_H

class FIGURE
{
public:
    float xc;
    float yc;

	FIGURE(float x, float y);
	
	virtual void move();
	virtual void rotate(); 
	virtual void scale();
	virtual void show();
};

class Circle: public FIGURE
{
public:
	float radius;
	
	Circle(float x, float y, float r);
	
	virtual void move(float xv, float yv); 
	virtual void scale(float size);
	virtual void show();
};

class Square: public FIGURE
{
public:
	float side, xv, yv;
	
	Square(float x, float y, float length);
	
	virtual void move(float x, float y);
	virtual void rotate(int alpha); 
	virtual void scale(float size);
	virtual void show();
};

#endif
