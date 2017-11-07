#include<iostream>
#include"Rectangle.h"

using namespace std;

bool Rectangle::InitMembers(const Point &upleft, const Point &lowright)
{
	if (upleft.GetX2() > lowright.GetX2() || upleft.GetY2() > lowright.GetY2())
	{
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}
	upLeft = upleft;
	lowRight = lowright;
	return true;
}
void Rectangle::ShowRectInfo3() const
{
	cout << "�� ��� : " << '[' << upLeft.GetX2() << ", ";
	cout << upLeft.GetY2() << ']' << endl;
	cout << "�� �ϴ� : " << '[' << lowRight.GetX2() << ", ";
	cout << lowRight.GetY2() << ']' << endl << endl;
}