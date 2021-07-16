// StructFunction.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <string>
//定义一个结构体
struct student 
{
	string name;
	int age;
	int score;
};

//封装打印函数，值传递的方式
//值传递中函数的形参改变不会使main函数中的实参发生改变
void Printfstudent(struct student a)
{
	a.name = "初晨";
	cout <<" \n这是值传递的形式打印的\n\n"<< "学生姓名： " << a.name << " 学生年龄：  " << a.age << "  学生成绩  " << a.score << endl;
}
//地址传递
void Printstu(struct student *p)
{
	p->age = 50;
	cout << " \n这是地址传递的形式打印的\n\n" << "学生姓名： " << p->name << " 学生年龄：  " << p->age << "  学生成绩  " << p->score << endl;
}
int main()
{
	struct student s1;
	s1.name = "小樱";
	s1.age = 18;
	s1.score = 60;
	student s2 = { "小树",50,100 };
	
	cout << "   main函数打印的\n\n" << "学生姓名： " << s1.name<< " 学生年龄：  " << s1.age << "  学生成绩  " << s1.score << endl;
	Printfstudent(s1); //值传递中修改了学生姓名

	cout << "\n main函数打印的\n\n" << "学生姓名： " << s2.name << " 学生年龄：  " << s2.age << "  学生成绩  " << s2.score << endl;
	Printstu(&s2);
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
