// ����ª������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class calculate
{
public:
	virtual int cal()
	{
		return 0;
	}

	int m_A;
	int m_B;
};
class addcal :public calculate
{
public:
	 int cal()
	{
		return m_A + m_B;
	}
};
class jiancal :public calculate
{
public:
	int cal()
	{
		return m_A - m_B;
	}
};
class mulcal :public calculate
{
public:
	int cal()
	{
		return m_A * m_B;
	}
};
class chucal :public calculate
{
public:
	int cal()
	{
		return m_A % m_B;
	}
};
void test01()
{
	//�ӷ�����
	calculate *abs = new addcal;
	abs->m_A = 10;
	abs->m_B = 10;
	cout << abs->m_A << "+" << abs->m_B << "=" << abs->cal() << endl;
	delete abs;
	//����
	abs = new jiancal;
	abs->m_A = 20;
	abs->m_B = 20;
	cout << abs->m_A << "-" << abs->m_B << "=" << abs->cal() << endl;
	delete abs;
	//�˷�
	abs = new mulcal;
	abs->m_A = 100;
	abs->m_B = 100;
	cout << abs->m_A << "*" << abs->m_B << "=" << abs->cal() << endl;
	delete abs;
	//����
	abs = new chucal;
	abs->m_A = 100;
	abs->m_B = 100;
	cout << abs->m_A << "%" << abs->m_B << "=" << abs->cal() << endl;
	delete abs;
}
int main()
{
	test01();
	system("pause");
    return 0;
}

