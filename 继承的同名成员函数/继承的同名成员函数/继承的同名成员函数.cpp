// �̳е�ͬ����Ա����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class base
{
public:
	int m_A=10;
	void func()
	{
		cout << "base�еĳ�Ա����" << endl;
	}
	//���غ���
	void func(int a)
	{
		cout << "base�е����س�Ա����" << endl;
	}
};
class son :public base
{
public:
	int m_A=200;
	void func()
	{
		cout << "son�еĳ�Ա����" << endl;
	}
};
void test01()
{
	son s;
	cout << "��ֱ�ӷ���ͬ����Աʱ���ʵ��ǣ�\n" << endl;
	cout << "\tֱ�ӷ���ͬ����Ա����m_A��" << s.m_A << endl;
	cout << "\tֱ�ӷ���ͬ����Ա����func -----------";
	s.func();

}
void test02()
{
	son s;
	cout << "\n���������������ͬ����Աʱ��\n" << endl;
	cout << "\t���ʵ�ͬ����Ա����m_A�ǣ�" << s.base::m_A << endl;
	cout << "\t���ʵ�ͬ����Ա����func�� -----------";
	s.base::func();
	cout << "\tֱ�ӷ�������ͬ����Ա����func --------" ;
	s.base::func(10);
	
}
int main()
{
	
	test01();
	test02();
	
	system("pause");
    return 0;
}

