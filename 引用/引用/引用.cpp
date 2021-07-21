// 引用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int & test01()   //引用做函数的返回值
{
	// 不要返回局部变量的引用
		
	int a = 10;
	return a;//局部变量存放于栈区，
}
int &test02()
   //函数的调用可以作为左值  
{
	static int a = 10;//静态变量存放于全局区中，全局区的变量在程序执行结束后由系统释放
	return a;
}
//常量引用
void test03(const int &val)
{
	//val = 1000;  常量引用就是为了防止在这里修改数据
	cout << "value = " << val << endl;
}
int main()
{
  //引用的基本作用 ： 给变量起别名
 //语法 ：数据类型 &别名=原名；
	int a = 10;
	int &b = a;
	cout << "a =  " << a << endl;
	cout << "b = " << b << endl;
	b = 100;
	cout << "a =  " << a << endl;
	cout << "b = " << b << endl;
	
	int &ref = test01();
	
	cout << "ref =" << ref << endl;//第一次结果正确，是因为编译器做了一个保留
	cout << "ref =" << ref << endl;//局部变量a的内存已经被释放了所以结果错误

	int &ref1 = test02();
	cout << "ref1 =" << ref1 << endl;
	cout << "ref1 =" << ref1 << endl;

	//函数的调用可以作为左值 
	test02() = 100000;
	cout << "ref1 =" << ref1 << endl;
	cout << "ref1 =" << ref1 << endl;
	
	//常量引用
	 const int &val = 10;
	test03(val);
	system("pause");
	return 0;
}



