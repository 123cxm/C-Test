// �̳е��﷨.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class page
{
public:
	void header()
	{
		cout << "ҳ��Ĺ���ͷ������" << endl;
	}
	void bottom()
	{
		cout << "\nҳ��Ĺ����ײ�" << endl;
	}
};
//�̳е��﷨�� class ���� �� �̳з�ʽ ����
class java : public page
{
public:
	void content()
	{
		cout << "\n java��ѧϰ��Ƶ" << endl;
	}
};
class python : public page
{
public:
	void content()
	{
		cout << "\n python��ѧϰ��Ƶ" << endl;
	}
};
class cpp : public page
{
public:
	void content()
	{
		cout << "\n C++��ѧϰ��Ƶ" << endl;
	}
};
int main()
{
	java ja;
	ja.header();
	ja.content();
	ja.bottom();
	cout << "-----------------------" << endl;
	python py;
	py.header();
	py.content();
	py.bottom();
	cout << "-----------------------" << endl;
	cpp cp;
	cp.header();
	cp.content();
	cp.bottom();
	system("pause");
    return 0;
}

