// ������Ԫ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class building;
class goodguy
{	
public:
	goodguy(); //goodguy�Ĺ��캯��
	void visit(); //���ʺ���
	building *build;
};
class building
{
	//����һ��goodguy����building��ĺ�����,���ܷ���building���е�˽�г�Ա����
	friend class goodguy;
public:
	building();  //building�Ĺ��캯��
	string m_livingrooom;
private:
	string m_bedroom;
};

//ʹ������д��Ա�����ķ�����ʼ��

//��building ���еĹ��캯�����г�ʼ��
building::building()
{
	m_livingrooom = "����";
	m_bedroom = "����";
}

//��goodguy ���еĹ��캯�����г�ʼ��
goodguy::goodguy()
{
	//�½�һ��building����
	build = new building;
}
void goodguy::visit()
{
	cout << "���������ڷ���" << build->m_livingrooom << endl;
	//��Ҫ����һ��goodguy����building��ĺ�����
	cout << "���������ڷ���" << build->m_bedroom << endl;
}
void test01()
{
	goodguy gg;
	gg.visit();
}
int main()
{
	test01();
	system("pause");
	return 0;
}

