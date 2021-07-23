// 类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
//定义一个类
class circle
{
public:
	//类中的属性和行为统称为成员
	//属性，一般是用变量
	int m_r;
	double PI = 3.14;
	//行为： 一般是用函数
	double  caculatete()
	{
		return 2 * PI *  m_r;
	}

};
class student
{
public:
	void setIfo(string name, int id)
	{
		
		string m_name = name;
		 int m_id = id;
	}
	void showIfo(string name, int id)
	{
		cout << "学生名字： " << name<<endl;
		cout << "学生ID： " << id<<endl;
	}
};
class person
{
public:
	void setName(string name)
	{
		m_name = name;
	}
	string getName()
	{
		return m_name;
	}
	void getAge()
	{
		m_age = 18;
		cout << "\t年龄是 :" << m_age << endl;
	}
	void setLover(string lover)
	{
		m_lover = lover;
	}
private:
	
   string m_name;//可读可写
   int m_age;//只读不写
   string m_lover;         //不可读可写
};

int main()
{
	//创建一个具体的对象
	circle c1;
	//给对象赋值
	c1.m_r = 10;
	cout << "圆的周长： " << c1.caculatete() << endl;
	student stu;
	stu.setIfo("cxm",10);
	stu.showIfo("cxm", 10);
	person p;
	
	p.setName("lqq");//可以写入名字
	cout << "\t名字是： " << p.getName() << endl;//可以读名字
	

	p.getAge();//可以读年龄


	p.setLover("逗逗");
	//cout << "情人是： " << p.setLover();
    //只写 无法读的
}

 
