// 继承的对象类型.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class base
{
public:
	int m_A;
	static int m_a;
protected:
	int m_B;
private:
	int m_C;
};
class son1 :public base
{
public:
	int m_D;
};
class son2 :protected base
{
public:
	int m_E;
};
class son3 :private base
{
public:
	int m_F;
};
void test01()
{
	cout << " public继承 " << sizeof(son1) << endl;
	cout << " protected继承 " << sizeof(son2) << endl;
	cout << " private继承 " << sizeof(son3) << endl;
}
int main()
{
	//父类中所有非静态成员变量都会被继承
	test01();
	system("pause");
    return 0;
}

