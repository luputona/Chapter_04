#pragma once
#ifndef __POINT2_H_
#define __POINT2_H_
class Point
{
	int x;
	int y;
public:
	Point(const int &xpos, const int &ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif // !__POINT2_H_
