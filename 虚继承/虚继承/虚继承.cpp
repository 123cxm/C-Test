// 虚继承.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class animal{
public:
	int m_age;
};
//加上virtual 后变成了虚继承  此时animal称为虚基类
//虚基类是为了解决在菱形继承时的二义性
class sheep:virtual public animal{};
class  tuo:virtual public animal{};
class sheeptuo :public sheep, public tuo{};
void test01()
{
	sheeptuo s;
	s.sheep::m_age = 10;
	s.tuo::m_age = 18;//虚继承只会继承最后一次修改的值
	cout << "继承 sheep类 的年龄 ：" << s.sheep::m_age << endl;
	cout << "继承  tuo类  的年龄 ：   " << s.tuo::m_age << endl;
	cout << "加上virtual后的年龄" << s.m_age << endl;
}

int main()
{
	test01();

	system("pause");
    return 0;
}

