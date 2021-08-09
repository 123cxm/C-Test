// 继承的语法.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class page
{
public:
	void header()
	{
		cout << "页面的公共头部部分" << endl;
	}
	void bottom()
	{
		cout << "\n页面的公共底部" << endl;
	}
};
//继承的语法： class 子类 ： 继承方式 父类
class java : public page
{
public:
	void content()
	{
		cout << "\n java的学习视频" << endl;
	}
};
class python : public page
{
public:
	void content()
	{
		cout << "\n python的学习视频" << endl;
	}
};
class cpp : public page
{
public:
	void content()
	{
		cout << "\n C++的学习视频" << endl;
	}
};
int main()
{
	java ja;
	ja.header();
	ja.content();
	ja.bottom();
	cout << "-----------------------" << endl;
	python py;
	py.header();
	py.content();
	py.bottom();
	cout << "-----------------------" << endl;
	cpp cp;
	cp.header();
	cp.content();
	cp.bottom();
	system("pause");
    return 0;
}

