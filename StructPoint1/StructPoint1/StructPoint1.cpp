// StructPoint1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <string>
//定义一个结构体
struct Student
{
	string name;
	int age;
	int score;
};
//定义一个嵌套结构体
struct teacher
{
	string name;
	int id;
	int age;
	struct Student stu;
};
int main()
{
	//定义一个结构体变量
	Student s1 = { "一诺",18,100 };
	//定义一个结构体指针，指向变量的地址
	Student *p = &s1;
	//输出指针结构体内容
	cout << "名字：  " <<  p->name << "  年龄：  " << p->age << "  成绩:  " << p->score << endl;
    //定义一个结构体变量2
	teacher t = { "初晨",003,21 };
	t.stu.name = "阿泽";
	
	cout << "老师的名字：  " << t.name << "  \n老师的编号：  " << t.id << "  \n老师的年龄:  " << t.age << "  \n老师辅导的学生的名字:  "<<t.stu.name<<endl;
	std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
