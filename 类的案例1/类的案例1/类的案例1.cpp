// 类的案例1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//创建立方体类
class cube
{
public:
	//设置长
	void setm_L( int L)
	{
		m_L = L;
	}
	//获取长
	int  getm_L()
	{
		return m_L;
	}
	//设置宽
	void setm_W(int W)
	{
		m_W = W;
	}
	//获取宽
	int  getm_W()
	{
		return m_W;
	}
	//设置高
	void setm_H(int H)
	{
		m_H = H;
	}
	//获取高
	int  getm_H()
	{
		return m_H;
	}
	//获取立方体的面积
	int  gets()
	{
		return 2 * (m_L* m_H + m_L * m_W + m_H * m_W);
	}
	//获取立方体的体积
	int  getV()
	{
		return m_H * m_L * m_W;
	}
	//利用成员函数进行判断
	bool isSameByclass(cube c)
	{
		if (m_H == c.getm_H() && m_L == c.getm_L() && m_W == c.getm_W())
		{
			cout << "利用成员函数判断:两个立方体是相等的" << endl;
            return true;
		}	
		else
		{
			cout << "利用成员函数判断:二者不相等" << endl;
			return false;
		}	
	}
private:
	int m_L;//长
	int m_W;//宽
	int m_H;//高
};

//利用全局函数判断两个立方体是否相等
bool isSame(cube &c1, cube &c2)
{
	if (c1.getm_L() == c2.getm_L() &&c1.getm_H() == c2.getm_H() &&c1.getm_W() == c2.getm_W())
	{
		cout << "使用全局函数判断结果：两个立方体相等" << endl;
		return true;
	}
	else
	{
		cout << "二者不相等" << endl;
		return false;
	}
}
int main()
{
	//创建一个立方体类的对象
	cube c1;
	c1.setm_L(10);
	c1.setm_H(10);
	c1.setm_W(10);
	cout << "c1的面积是： " << c1.gets() << endl;
	cout << "c1的体积是： " << c1.getV() << endl;
	
	cube c2;
	c2.setm_L(10);
	c2.setm_H(10);
	c2.setm_W(10);
	cout << "c2的体积是： " << c2.getV() << endl;
	//利用全局函数进行判断
	isSame(c1, c2);
	c1.isSameByclass(c2);
	system("pause");
	return 0;
}

