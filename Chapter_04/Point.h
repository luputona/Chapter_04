#pragma once
#ifndef __POINT_H__
#define __POINT_H__

class Point
{
private:
	int x;
	int y;
public:
	bool InitMembers(int xpos, int ypos);
	int GetX2() const;
	int GetY2() const;
	bool SetX2(int xpos);
	bool SetY2(int ypos);
};

#endif // !__POINT_H__

