#include<iostream>
#include"Point.h"
#include"Rectangle.h"

using namespace std;

void main2()
{
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
	{
		cout << "�ʱ�ȭ ����1" << endl;
	}
	if (!pos1.InitMembers(2, 4))
	{
		cout << "�ʱ�ȭ ����2" << endl;
	}

	Point pos2;
	if (!pos2.InitMembers(5, 9))
	{
		cout << "�ʱ�ȭ ����3" << endl;
	}
	Rectangle rec;
	if (rec.InitMembers(pos2, pos1))
	{
		cout << "���簢�� �ʱ�ȭ ����1" << endl;
	}
	if (rec.InitMembers(pos1, pos2))
	{
		cout << "���簢�� �ʱ�ȭ ����2" << endl;
	}

	rec.ShowRectInfo3();
}