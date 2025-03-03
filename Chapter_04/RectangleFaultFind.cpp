#include<iostream>
#include"Point.h"
#include"Rectangle.h"

using namespace std;

void main2()
{
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
	{
		cout << "초기화 실패1" << endl;
	}
	if (!pos1.InitMembers(2, 4))
	{
		cout << "초기화 실패2" << endl;
	}

	Point pos2;
	if (!pos2.InitMembers(5, 9))
	{
		cout << "초기화 실패3" << endl;
	}
	Rectangle rec;
	if (rec.InitMembers(pos2, pos1))
	{
		cout << "직사각형 초기화 실패1" << endl;
	}
	if (rec.InitMembers(pos1, pos2))
	{
		cout << "직사각형 초기화 실패2" << endl;
	}

	rec.ShowRectInfo3();
}