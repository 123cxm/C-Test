// �̳еĶ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class base
{
public:
	int m_A;
	static int m_a;
protected:
	int m_B;
private:
	int m_C;
};
class son1 :public base
{
public:
	int m_D;
};
class son2 :protected base
{
public:
	int m_E;
};
class son3 :private base
{
public:
	int m_F;
};
void test01()
{
	cout << " public�̳� " << sizeof(son1) << endl;
	cout << " protected�̳� " << sizeof(son2) << endl;
	cout << " private�̳� " << sizeof(son3) << endl;
}
int main()
{
	//���������зǾ�̬��Ա�������ᱻ�̳�
	test01();
	system("pause");
    return 0;
}

