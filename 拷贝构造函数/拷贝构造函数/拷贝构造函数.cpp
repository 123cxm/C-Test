// 拷贝构造函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class person
{
public:
	//构建一个默认构造函数
	person()
	{
		cout << "person的默认构造函数调用" << endl;
	}
	//构建一个有参构造函数
	person(int age)
	{
		m_age = age;
		cout << "person的有参构造函数调用" << endl;
	}
	//构建一个拷贝构造函数
	person(const person &p)
	{
		m_age = p.m_age;
		cout << "person的拷贝构造函数调用" << endl;
	}
	//构建一个析构函数
	~person()
	{
		cout << "person的析构函数调用" << endl;
	}
	int m_age;
};

//使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	person p1(10);
	person p2(p1);
	cout << "p2 的年龄： " << p2.m_age << endl;
}
//值传递的方式给函数参数传值
void dowork(person p)
{

}
void test02()
{
	person p;
	dowork(p);
	//cout << "p的年龄： " << p.m_age << endl;
}
//以值方式传递局部函数
person dowork2()
{
	person p1;
	cout << "p1 的地址 : " << &p1 << endl;
	return p1;
}
void test03()
{
	person p = dowork2();
	cout << "p 的地址 ; " << &p << endl;
}
int main()
{
	test01();
	cout << endl;
	test02();
	cout << endl;
	test03();
}
