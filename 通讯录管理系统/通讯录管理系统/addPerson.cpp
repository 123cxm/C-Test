#include "addPerson.h"
#define  MAX 1000
struct  Person
{
	string m_Name;
	int  m_Sex;//1.�У�2.Ů
	int  m_Age;
	string m_Phone;
	string m_Addr;
};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArry[MAX];//ͨѶ¼����ϵ�˵����� 
	int m_Size;//��ǰͨѶ¼����ϵ�˵ĸ���
};
void addPerson(struct Addressbooks *abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "��ǰͨѶ¼����" << endl;
		return;
	}
	else
	{
		//��������
		string name;
		cout << "���������֣� " << endl;
		cin >> name;
		abs->personArry[abs->m_Size].m_Name = name;
		//�����Ա�
		int sex;
		while (true)
		{
			cout << "�������Ա�" << endl;
			cout << "1--��   2--Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArry[abs->m_Size].m_Sex = sex;
				break;
			}
		}
		//��������
		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->personArry[abs->m_Size].m_Age = age;
		//����绰
		string phone;
		cout << "������绰" << endl;
		cin >> phone;
		abs->personArry[abs->m_Size].m_Phone = phone;
		//�����ַ
		string addr;
		cout << "�������ַ" << endl;
		cin >> addr;
		abs->personArry[abs->m_Size].m_Addr = addr;
		abs->m_Size++;
		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");
	}

}