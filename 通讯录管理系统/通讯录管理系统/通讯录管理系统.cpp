#include <iostream>
#include <cstdlib>
#include <string>
#define  MAX 1000
#include "addPerson.h"
using namespace std;
//封装一个函数，显示主菜单界面
//设计联系人的结构体
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
void showmenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}
//封装一个函数添加联系人
/*void addPerson(struct Addressbooks *abs)
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
		abs->m_Size ++;
		cout << "添加成功！" << endl;	
		system("pause");
		system("cls");
	}
	
}*/
void showPerson(Addressbooks *abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前联系人记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "新建联系人姓名：  " << abs->personArry[i].m_Name << "\t";
			cout << "新建联系人性别：  " << (abs->personArry[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "新建联系人年龄：  " << abs->personArry[i].m_Age << "\t";
			cout << "新建联系人电话：  " << abs->personArry[i].m_Phone<< "\t";
			cout << "新建联系人地址：  " << abs->personArry[i].m_Addr << endl;
			
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
			cout << "存在该用户" << endl;
			return i;
		}
		else
			return -1;
	}
}
void deletedPerson(Addressbooks *abs)
{

		cout << "请输入你想删除的名字：" << endl;
		string name;
		cin >> name;
		int ret = isExist(abs, name); 
		if (abs->m_Size != 0)
		{
			
			if (ret == -1)
			{
				cout << "你没有这个名字的朋友" << endl;
			}
			else
			{

				for (int i = ret; i < abs->m_Size; i++)
				{
					abs->personArry[i] = abs->personArry[i + 1];
				}
				abs->m_Size--;
				cout << "删除成功" << endl;
			}
		}
		else
		{
			cout << "当前无联系人记录" << endl;
		}
		system("pause");
		system("cls");
}

void findPerson(Addressbooks * abs)
{
	
	cout << "请输入你想查找的名字：" << endl;
	string name;
	cin >> name; int ret = isExist(abs, name);
	if (ret != -1)
	{
		 cout<< "所查找联系人姓名：  " << abs->personArry[ret].m_Name << "\t";
		cout << "所查找联系人性别：  " << (abs->personArry[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "所查找联系人年龄：  " << abs->personArry[ret].m_Age << "\t";
		cout << "所查找联系人电话：  " << abs->personArry[ret].m_Phone << "\t";
		cout << "所查找联系人地址：  " << abs->personArry[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void  modifyPerson(Addressbooks *abs)
{
	cout << "请输入你想修改的联系人名字：" << endl;
	string name;
	cin >> name; 
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string M_name;
		cout << "请输入修改后的姓名：  " << endl;
		cin >> M_name;
		abs->personArry[ret].m_Name = M_name;

		int M_sex;
		while (true)
		{
			cout << "请输入性别：" << endl;
			cout << "1--男   2--女" << endl;
			cin >>M_sex;;
			if (M_sex == 1 || M_sex == 2)
			{//输入正确 退出循环
				abs->personArry[abs->m_Size].m_Sex = M_sex;
				break;
			}
			cout << "输入有误，请重新输入"<<endl;
		}

		int M_age;
		cout << "请输入修改后的年龄：  " << endl;
		cin >> M_age;
		abs->personArry[ret].m_Age = M_age;

		string M_phone;
		cout << "请输入修改后的电话：  " << endl;
		cin >> M_phone;
		abs->personArry[ret].m_Phone = M_phone;

		string M_addr;
		cout << "请输入修改后的地址：  " << endl;
		cin >> M_addr;
		abs->personArry[ret].m_Addr = M_addr;
		cout << "修改成功" << endl;
		cout << "修改后联系人姓名：  " << abs->personArry[ret].m_Name << "\t";
		cout << "修改后联系人性别：  " << (abs->personArry[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "修改后联系人年龄：  " << abs->personArry[ret].m_Age << "\t";
		cout << "修改后联系人电话：  " << abs->personArry[ret].m_Phone << "\t";
		cout << "修改后联系人地址：  " << abs->personArry[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks *abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空！";
	system("pause");
	system("cls");	
}
int main()
{
	//新建一个通讯录结构体变量
	struct Addressbooks abs;
	//当前通讯录中人员数
	abs.m_Size = 0;//错误 int m_Size=0;
	
	while (true)
	{
		//显示菜单界面
		showmenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
			//添加联系人：调用增加联系人函数
		case 1:
			addPerson(&abs);
			break;
			//显示联系人
		case 2:
			showPerson(&abs);
			break;
			//删除联系人
		case 3:
		{
			//目前不能删除最后一位联系人
			deletedPerson(&abs);
		}
			break;
			//查找联系人
		case 4:
		{
            findPerson(&abs);
		}
			break;
			//修改联系人
		case 5:
			modifyPerson(&abs);
			break;
			//6.清空联系人
		case 6:
			cleanPerson(&abs);
			break;
			//0.退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
	 	    return 0;
			break;
		default:
			break;		
		}
	  }
	    
}