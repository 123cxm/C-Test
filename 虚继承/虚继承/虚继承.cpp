// ��̳�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class animal{
public:
	int m_age;
};
//����virtual ��������̳�  ��ʱanimal��Ϊ�����
//�������Ϊ�˽�������μ̳�ʱ�Ķ�����
class sheep:virtual public animal{};
class  tuo:virtual public animal{};
class sheeptuo :public sheep, public tuo{};
void test01()
{
	sheeptuo s;
	s.sheep::m_age = 10;
	s.tuo::m_age = 18;//��̳�ֻ��̳����һ���޸ĵ�ֵ
	cout << "�̳� sheep�� ������ ��" << s.sheep::m_age << endl;
	cout << "�̳�  tuo��  ������ ��   " << s.tuo::m_age << endl;
	cout << "����virtual�������" << s.m_age << endl;
}

int main()
{
	test01();

	system("pause");
    return 0;
}

