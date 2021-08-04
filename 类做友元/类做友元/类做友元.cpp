// 类做友元.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class building;
class goodguy
{	
public:
	goodguy(); //goodguy的构造函数
	void visit(); //访问函数
	building *build;
};
class building
{
	//声明一下goodguy类是building类的好朋友,才能访问building类中的私有成员变量
	friend class goodguy;
public:
	building();  //building的构造函数
	string m_livingrooom;
private:
	string m_bedroom;
};

//使用类外写成员函数的方法初始化

//对building 类中的构造函数进行初始化
building::building()
{
	m_livingrooom = "客厅";
	m_bedroom = "卧室";
}

//对goodguy 类中的构造函数进行初始化
goodguy::goodguy()
{
	//新建一个building对象
	build = new building;
}
void goodguy::visit()
{
	cout << "好朋友正在访问" << build->m_livingrooom << endl;
	//需要声明一下goodguy类是building类的好朋友
	cout << "好朋友正在访问" << build->m_bedroom << endl;
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

