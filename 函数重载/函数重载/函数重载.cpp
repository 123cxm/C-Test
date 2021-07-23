// 函数重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void func()
{
	cout<<"你好"<<endl;
}
void func(int a)
{
	cout << "你好吗" << endl;
}
void func(double a)
{
	cout << "函数重载参数类型不同" << endl;
}
void func(int a, double b)
{
	cout << "函数重载参数个数不同"<<endl;
}
void func(double a, int b)
{
	cout << "函数重载参数顺序不同" << endl;
}
int main()
{
	

	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14,10);
		system("pause");

}


