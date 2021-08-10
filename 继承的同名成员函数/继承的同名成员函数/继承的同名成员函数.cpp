// 继承的同名成员函数.cpp : 定义控制台应用程序的入口点。
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
		cout << "base中的成员函数" << endl;
	}
	//重载函数
	void func(int a)
	{
		cout << "base中的重载成员函数" << endl;
	}
};
class son :public base
{
public:
	int m_A=200;
	void func()
	{
		cout << "son中的成员函数" << endl;
	}
};
void test01()
{
	son s;
	cout << "当直接访问同名成员时访问的是：\n" << endl;
	cout << "\t直接访问同名成员变量m_A：" << s.m_A << endl;
	cout << "\t直接访问同名成员函数func -----------";
	s.func();

}
void test02()
{
	son s;
	cout << "\n当增加作用域访问同名成员时：\n" << endl;
	cout << "\t访问的同名成员变量m_A是：" << s.base::m_A << endl;
	cout << "\t访问的同名成员函数func是 -----------";
	s.base::func();
	cout << "\t直接访问重载同名成员函数func --------" ;
	s.base::func(10);
	
}
int main()
{
	
	test01();
	test02();
	
	system("pause");
    return 0;
}

