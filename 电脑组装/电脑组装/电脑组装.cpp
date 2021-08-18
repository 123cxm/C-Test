// 电脑组装.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CPU
{
public:
	virtual void caculate() = 0;
};
class Memory 
{
public:
	virtual void storge() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
//创建一个电脑类
class Computer
{
public:
	Computer(CPU *cpu, Memory *mem,VideoCard *vc)
	{
		m_cpu =  cpu;
		m_memory = mem;
		m_videocard = vc;
	}
	//提供工作函数
	void work()
	{
		m_cpu->caculate();

		m_memory->storge();

		m_videocard->display();
	}
	~Computer()
	{
		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		 }
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
		if (m_videocard != NULL)
		{
			delete m_videocard;
			m_videocard = NULL;
		}
	}
private:
	CPU *m_cpu;//CPU的零件指针
	Memory *m_memory;
	VideoCard *m_videocard;
};
//具体的厂商
//Intel厂商
class IntelCPU:public CPU
{
//重写父类中的纯虚函数
public:
	 void caculate()
	{
		cout << "Intel的cpu开始计算了" << endl;
	}
};
class IntelMemory :public Memory
{
	//重写父类中的纯虚函数
public:
	 void storge()
	{
		cout << "Intel的内存条开始存储了 " << endl;
	}
};
class IntelVideoCard :public VideoCard
{
	//重写父类中的纯虚函数
public:
	 void display()
	{
		cout << "Intel的显卡开始显示了" << endl;
	}
};
//Lenovo厂商
class LenovoCPU :public CPU
{
	//重写父类中的纯虚函数
	 void caculate()
	{
		cout << "Lenovo的cpu开始计算了" << endl;
	}
};
class LenovoMemory :public Memory
{
	//重写父类中的纯虚函数
	 void storge()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	//重写父类中的纯虚函数
	 void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};
void test01()
{
	//第一台电脑零件
	CPU *Intecpu = new IntelCPU; //创建在堆栈
	Memory *Intermem = new IntelMemory;
	VideoCard *Intervc = new IntelVideoCard;
	
	//创建第一台电脑
	Computer *computer1 = new Computer(Intecpu,Intermem,Intervc);//创建在堆栈
	computer1->work();
	delete computer1;
	//只删除了computer1  没有删除那三个指针
	//在电脑类中写一个析构函数释放

	cout << "-----------------------------" << endl;
	//第二台电脑
	Computer *computer2 = new Computer(new LenovoCPU,new LenovoMemory,new LenovoVideoCard);//创建在堆栈
	computer2->work();
	delete computer2;

	cout << "-----------------------------" << endl;
	Computer *computer3 = new Computer(new IntelCPU, new LenovoMemory, new IntelVideoCard);//创建在堆栈
	computer3->work();
	delete computer3;

 }
int main()
{
	test01();
	system("pause");
    return 0;
}

