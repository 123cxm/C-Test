// ������װ.cpp : �������̨Ӧ�ó������ڵ㡣
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
//����һ��������
class Computer
{
public:
	Computer(CPU *cpu, Memory *mem,VideoCard *vc)
	{
		m_cpu =  cpu;
		m_memory = mem;
		m_videocard = vc;
	}
	//�ṩ��������
	void work()
	{
		m_cpu->caculate();

		m_memory->storge();

		m_videocard->display();
	}
	~Computer()
	{
		//�ͷ�CPU���
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
	CPU *m_cpu;//CPU�����ָ��
	Memory *m_memory;
	VideoCard *m_videocard;
};
//����ĳ���
//Intel����
class IntelCPU:public CPU
{
//��д�����еĴ��麯��
public:
	 void caculate()
	{
		cout << "Intel��cpu��ʼ������" << endl;
	}
};
class IntelMemory :public Memory
{
	//��д�����еĴ��麯��
public:
	 void storge()
	{
		cout << "Intel���ڴ�����ʼ�洢�� " << endl;
	}
};
class IntelVideoCard :public VideoCard
{
	//��д�����еĴ��麯��
public:
	 void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��" << endl;
	}
};
//Lenovo����
class LenovoCPU :public CPU
{
	//��д�����еĴ��麯��
	 void caculate()
	{
		cout << "Lenovo��cpu��ʼ������" << endl;
	}
};
class LenovoMemory :public Memory
{
	//��д�����еĴ��麯��
	 void storge()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	//��д�����еĴ��麯��
	 void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};
void test01()
{
	//��һ̨�������
	CPU *Intecpu = new IntelCPU; //�����ڶ�ջ
	Memory *Intermem = new IntelMemory;
	VideoCard *Intervc = new IntelVideoCard;
	
	//������һ̨����
	Computer *computer1 = new Computer(Intecpu,Intermem,Intervc);//�����ڶ�ջ
	computer1->work();
	delete computer1;
	//ֻɾ����computer1  û��ɾ��������ָ��
	//�ڵ�������дһ�����������ͷ�

	cout << "-----------------------------" << endl;
	//�ڶ�̨����
	Computer *computer2 = new Computer(new LenovoCPU,new LenovoMemory,new LenovoVideoCard);//�����ڶ�ջ
	computer2->work();
	delete computer2;

	cout << "-----------------------------" << endl;
	Computer *computer3 = new Computer(new IntelCPU, new LenovoMemory, new IntelVideoCard);//�����ڶ�ջ
	computer3->work();
	delete computer3;

 }
int main()
{
	test01();
	system("pause");
    return 0;
}

