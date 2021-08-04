// 友元.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class home
{
	//全局函数BF是home 的好朋友，可以访问home中的私有成员，都不需要写在public里面  只用写在类里面
	friend void BF(home *hom);
	//创建一个构造函数
public:
	
	home():m_livingroom("客厅"),m_bedingroom("卧室"){}
public:
	string m_livingroom;//客厅
private:
	string m_bedingroom;//卧室
};
//创建全局函数
void BF(home *hom)
{
	cout << "全局函数： lqq进了我家的" << hom->m_livingroom << endl;
	cout << "在类中使用friend声明了void BF(home *hom)后才能访问到私有成员" << endl;
	cout << "全局函数： lqq进了我家的" << hom->m_bedingroom << endl;
}
void test01()
{
	//新建一个对象
    home cxmho;
    BF(&cxmho);
}
int main()
{
	test01();
	system("pause");
    return 0;
}

