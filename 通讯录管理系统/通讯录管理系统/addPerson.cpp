#include "addPerson.h"
#define  MAX 1000
struct  Person
{
	string m_Name;
	int  m_Sex;//1.男，2.女
	int  m_Age;
	string m_Phone;
	string m_Addr;
};
//设计通讯录结构体
struct Addressbooks
{
	struct Person personArry[MAX];//通讯录中联系人的数组 
	int m_Size;//当前通讯录中联系人的个数
};
void addPerson(struct Addressbooks *abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "当前通讯录已满" << endl;
		return;
	}
	else
	{
		//输入名字
		string name;
		cout << "请输入名字： " << endl;
		cin >> name;
		abs->personArry[abs->m_Size].m_Name = name;
		//输入性别
		int sex;
		while (true)
		{
			cout << "请输入性别：" << endl;
			cout << "1--男   2--女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArry[abs->m_Size].m_Sex = sex;
				break;
			}
		}
		//输入年龄
		int age;
		cout << "请输入年龄" << endl;
		cin >> age;
		abs->personArry[abs->m_Size].m_Age = age;
		//输入电话
		string phone;
		cout << "请输入电话" << endl;
		cin >> phone;
		abs->personArry[abs->m_Size].m_Phone = phone;
		//输入地址
		string addr;
		cout << "请输入地址" << endl;
		cin >> addr;
		abs->personArry[abs->m_Size].m_Addr = addr;
		abs->m_Size++;
		cout << "添加成功！" << endl;
		system("pause");
		system("cls");
	}

}