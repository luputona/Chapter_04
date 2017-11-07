#pragma once
#ifndef __RECTANGLE2_H__
#define __RECTANGLE2_H__
#include "Point_2.h"

class Rectangle
{
	Point upLeft;
	Point lowRight;
public:
	Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
	void ShowRecInfo()const;
};



#endif // !__RECTANGLE2_H__
