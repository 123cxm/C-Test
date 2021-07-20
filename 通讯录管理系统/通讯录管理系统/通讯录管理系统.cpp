#include <iostream>
#include <cstdlib>
#include <string>
#define  MAX 1000
#include "addPerson.h"
using namespace std;
//��װһ����������ʾ���˵�����
//�����ϵ�˵Ľṹ��
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
void showmenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}
//��װһ�����������ϵ��
/*void addPerson(struct Addressbooks *abs)
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
		abs->m_Size ++;
		cout << "��ӳɹ���" << endl;	
		system("pause");
		system("cls");
	}
	
}*/
void showPerson(Addressbooks *abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��ϵ�˼�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "�½���ϵ��������  " << abs->personArry[i].m_Name << "\t";
			cout << "�½���ϵ���Ա�  " << (abs->personArry[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "�½���ϵ�����䣺  " << abs->personArry[i].m_Age << "\t";
			cout << "�½���ϵ�˵绰��  " << abs->personArry[i].m_Phone<< "\t";
			cout << "�½���ϵ�˵�ַ��  " << abs->personArry[i].m_Addr << endl;
			
		}	
	}
	        system("pause");
	        system("cls");
}
int isExist(Addressbooks *abs,string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArry[i].m_Name == name)
		{
			cout << "���ڸ��û�" << endl;
			return i;
		}
		else
			return -1;
	}
}
void deletedPerson(Addressbooks *abs)
{

		cout << "����������ɾ�������֣�" << endl;
		string name;
		cin >> name;
		int ret = isExist(abs, name); 
		if (abs->m_Size != 0)
		{
			
			if (ret == -1)
			{
				cout << "��û��������ֵ�����" << endl;
			}
			else
			{

				for (int i = ret; i < abs->m_Size; i++)
				{
					abs->personArry[i] = abs->personArry[i + 1];
				}
				abs->m_Size--;
				cout << "ɾ���ɹ�" << endl;
			}
		}
		else
		{
			cout << "��ǰ����ϵ�˼�¼" << endl;
		}
		system("pause");
		system("cls");
}

void findPerson(Addressbooks * abs)
{
	
	cout << "������������ҵ����֣�" << endl;
	string name;
	cin >> name; int ret = isExist(abs, name);
	if (ret != -1)
	{
		 cout<< "��������ϵ��������  " << abs->personArry[ret].m_Name << "\t";
		cout << "��������ϵ���Ա�  " << (abs->personArry[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "��������ϵ�����䣺  " << abs->personArry[ret].m_Age << "\t";
		cout << "��������ϵ�˵绰��  " << abs->personArry[ret].m_Phone << "\t";
		cout << "��������ϵ�˵�ַ��  " << abs->personArry[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void  modifyPerson(Addressbooks *abs)
{
	cout << "�����������޸ĵ���ϵ�����֣�" << endl;
	string name;
	cin >> name; 
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string M_name;
		cout << "�������޸ĺ��������  " << endl;
		cin >> M_name;
		abs->personArry[ret].m_Name = M_name;

		int M_sex;
		while (true)
		{
			cout << "�������Ա�" << endl;
			cout << "1--��   2--Ů" << endl;
			cin >>M_sex;;
			if (M_sex == 1 || M_sex == 2)
			{//������ȷ �˳�ѭ��
				abs->personArry[abs->m_Size].m_Sex = M_sex;
				break;
			}
			cout << "������������������"<<endl;
		}

		int M_age;
		cout << "�������޸ĺ�����䣺  " << endl;
		cin >> M_age;
		abs->personArry[ret].m_Age = M_age;

		string M_phone;
		cout << "�������޸ĺ�ĵ绰��  " << endl;
		cin >> M_phone;
		abs->personArry[ret].m_Phone = M_phone;

		string M_addr;
		cout << "�������޸ĺ�ĵ�ַ��  " << endl;
		cin >> M_addr;
		abs->personArry[ret].m_Addr = M_addr;
		cout << "�޸ĳɹ�" << endl;
		cout << "�޸ĺ���ϵ��������  " << abs->personArry[ret].m_Name << "\t";
		cout << "�޸ĺ���ϵ���Ա�  " << (abs->personArry[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "�޸ĺ���ϵ�����䣺  " << abs->personArry[ret].m_Age << "\t";
		cout << "�޸ĺ���ϵ�˵绰��  " << abs->personArry[ret].m_Phone << "\t";
		cout << "�޸ĺ���ϵ�˵�ַ��  " << abs->personArry[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks *abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼����գ�";
	system("pause");
	system("cls");	
}
int main()
{
	//�½�һ��ͨѶ¼�ṹ�����
	struct Addressbooks abs;
	//��ǰͨѶ¼����Ա��
	abs.m_Size = 0;//���� int m_Size=0;
	
	while (true)
	{
		//��ʾ�˵�����
		showmenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
			//�����ϵ�ˣ�����������ϵ�˺���
		case 1:
			addPerson(&abs);
			break;
			//��ʾ��ϵ��
		case 2:
			showPerson(&abs);
			break;
			//ɾ����ϵ��
		case 3:
		{
			//Ŀǰ����ɾ�����һλ��ϵ��
			deletedPerson(&abs);
		}
			break;
			//������ϵ��
		case 4:
		{
            findPerson(&abs);
		}
			break;
			//�޸���ϵ��
		case 5:
			modifyPerson(&abs);
			break;
			//6.�����ϵ��
		case 6:
			cleanPerson(&abs);
			break;
			//0.�˳�ͨѶ¼
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
	 	    return 0;
			break;
		default:
			break;		
		}
	  }
	    
}