// 初始化列表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Person
{
	//初始化列表语法： 构造函数():属性1(值1)，属性2(值2).....{  }
public:

	Person() :m_A(10), m_B(20)
	{
		//cout << "构造函数的名字必须和类名一样" << endl;
	}
	//更加灵活的赋初值
	Person(int a, int b) :m_A(a), m_B(b)
	{

	}
	int m_A;
	int m_B;
};
int main()
{
	Person p1;
	cout << "m_A = " << p1.m_A << endl;
	cout << "m_B = " << p1.m_B << endl;
	Person p2(40,50);
	cout << "m_A = " << p2.m_A << endl;
	cout << "m_B = " << p2.m_B << endl;
}

 