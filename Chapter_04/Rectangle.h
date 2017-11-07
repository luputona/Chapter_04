#pragma once
#ifndef __RECTANGLE__H
#define __RECTANGLE__H

#include"Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;
public:
	bool InitMembers(const Point &upleft, const Point &lowright);
	void ShowRectInfo3() const;
};

#endif // !__RECTANGLE__H

