#include<iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;
};

class RectAngle
{
public:
	Point upLeft;
	Point lowRight;
public:
	void ShowRectInfo()
	{
		cout << "좌 상단 : " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "우 하단 : " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;
	}
};


void main1()
{
	Point pos1 = { -2,4 };
	Point pos2 = { 5,9 };
	RectAngle rec = { pos2, pos1 };
	rec.ShowRectInfo();
}