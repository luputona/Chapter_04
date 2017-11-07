#include<iostream>
#include"Rectangle.h"

using namespace std;

bool Rectangle::InitMembers(const Point &upleft, const Point &lowright)
{
	if (upleft.GetX2() > lowright.GetX2() || upleft.GetY2() > lowright.GetY2())
	{
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = upleft;
	lowRight = lowright;
	return true;
}
void Rectangle::ShowRectInfo3() const
{
	cout << "좌 상단 : " << '[' << upLeft.GetX2() << ", ";
	cout << upLeft.GetY2() << ']' << endl;
	cout << "우 하단 : " << '[' << lowRight.GetX2() << ", ";
	cout << lowRight.GetY2() << ']' << endl << endl;
}