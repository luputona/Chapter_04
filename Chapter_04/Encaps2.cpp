#include<iostream>
using namespace std;

class SinivelCap //���� óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�" << endl; }
};

class SneezeCap //��ä�� óġ�� ĸ�� 
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�" << endl; }
};

class SnuffleCap // �ڸ��� óġ�� ĸ��
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};
class CONTAC600
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;
public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};
class ColdPatient
{
public:
	//void TakeSiniveCap(const SinivelCap &cap) const { cap.Take(); }
	//void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
	//void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
	void TakeCONTAC600(const CONTAC600 &cap) const 
	{ 
		cap.Take(); 
	}
};


void main4()
{
	CONTAC600 cap;

	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);

}