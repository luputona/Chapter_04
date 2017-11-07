#include<iostream>
using namespace std;

class SimpleClass
{
	int num1;
	int num2;
public:
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	//SimpleClass(int n1 = 0, int n2 = 0)
	//{
	//	num1 = n1;
	//	num2 = n2;
	//}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};


void main5()
{
	SimpleClass sc;
	sc.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100,300);
	sc3.ShowData();
}