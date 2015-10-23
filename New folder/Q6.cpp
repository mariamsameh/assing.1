6. Here’s a class declaration:
class Move
{
private:
double x;
double y;
public:
Move(double a = 0, double b = 0); // sets x, y to a,
b
showmove() const; // shows current x, y values
Move add(const Move & m) const;
// this function adds x of m to x of invoking object
to get new x,
// adds y of m to y of invoking object to get new y,
creates a new
// move object initialized to new x, y values and
returns it
reset(double a = 0, double b = 0); // resets x,y to
a, b
};
Create member function definitions and a program that exercises the
class.
ans::

-move.cpp
	#include "iostream"
	#include "move.h"
	Move(double a , double b)
	{
	x=a;
	y=b;
	}
	void Move::showmove() const;
	{
	std::cout<< "x=" << x << "y=" << y ;
	}	
	Move add(const Move & m) const
	{
	Move temp ;
	temp.x = x+m.x;
	temp.y=y+m.y;
	return temp ;
	}

	void Move ::reset(double a = 0, double b = 0)
	{
	x=a;
	y=b;
	} 
