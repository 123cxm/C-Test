// ��Ԫ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class home
{
	//ȫ�ֺ���BF��home �ĺ����ѣ����Է���home�е�˽�г�Ա��������Ҫд��public����  ֻ��д��������
	friend void BF(home *hom);
	//����һ�����캯��
public:
	
	home():m_livingroom("����"),m_bedingroom("����"){}
public:
	string m_livingroom;//����
private:
	string m_bedingroom;//����
};
//����ȫ�ֺ���
void BF(home *hom)
{
	cout << "ȫ�ֺ����� lqq�����Ҽҵ�" << hom->m_livingroom << endl;
	cout << "������ʹ��friend������void BF(home *hom)����ܷ��ʵ�˽�г�Ա" << endl;
	cout << "ȫ�ֺ����� lqq�����Ҽҵ�" << hom->m_bedingroom << endl;
}
void test01()
{
	//�½�һ������
    home cxmho;
    BF(&cxmho);
}
int main()
{
	test01();
	system("pause");
    return 0;
}

