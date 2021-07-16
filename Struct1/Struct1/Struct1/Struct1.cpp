// Struct1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
 using namespace std;
 struct Student
 {
	 string name;
	 int age;
	 int score;
 };
int main()
{
	//第一种创建方式
	Student s1;
		s1.name = "张三";
		s1.age = 18;
		s1.score = 60;
		cout << "名字： " << s1.name << "  年龄： " << s1.age << "  成绩： " << s1.score << endl;
	//第二种创建方式
		Student s2 = { "李四",20,80 };
		cout << "名字： " << s2.name << "  年龄： " << s2.age << "  成绩： " << s2.score << endl;
		//创建结构体数组
		struct Student stuArry[3]=
		{
			{"小明",1,10},
		    {"小红",5,20},
		    {"小兰",8,100}
		};
		//使用for循环输出结构体数组
		for (int i = 0; i < 3; i++)
		{
			cout << "名字： " << stuArry[i].name << "  年龄： " << stuArry[i].age << "  成绩： " << stuArry[i].score<< endl;

		}
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
