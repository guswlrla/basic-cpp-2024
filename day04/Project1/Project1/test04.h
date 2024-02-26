// Rectangle.h ¿¹Á¦
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "test03.h"

class Rectangle
{
private:
	Point upleft;
	Point lowRight;
public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};
#endif