// 构造函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class person
{
public :
	person() //构造函数
	{
		cout << "person 构造函数的调用" << endl;
	}
	~ person() //析构函数
	{
		cout << "person 析构函数的调用" << endl;
	}
};
void test01()
{
	person p;
}
int main()
{
	test01();

	person p;
	system("pause");
	return 0;
}

