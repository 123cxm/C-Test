// ch1-teacher.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//定义一个学生结构体
struct Student
{
	string name;
	int score;
};
//定义一个老师结构体
struct Teacher
{
	string name;
	struct Student sArry[5];
};
//给老师学生信息进行赋值的函数
void allocatespace(struct Teacher tArry[] ,int len)
{
	string SeedName = "ABCDE";
	srand((unsigned int)time(NULL));//利用当前时间生成随机数
	for (int i = 0; i < len; i++)
	{
		//给老师的名字进行赋值
		tArry[i].name = "Teacher_";	
		tArry[i].name += SeedName[i];
		//输出老师的名字
		cout << "老师的名字是 " << tArry[i].name << endl;
			
		for (int j = 0; j < 5; j++)
		{	
			//给学生的信息进行赋值
			tArry[i].sArry[j].name = "Student_";
			int random = rand() % 60 + 40;
			//定义一个随机数当作学生的成绩
			tArry[i].sArry[j].score = random;
			tArry[i].sArry[j].name += SeedName[j];
			cout << "\t 学生的名字是" << tArry[i].sArry[j].name << " 成绩是：" << tArry[i].sArry[j].score << endl;
		}
	}
}
int main()
{
   //创建3名老师数组
	struct Teacher tArry[3];
	//通过函数给老师的信息进行赋值，并给老师所带的学生信息进行赋值
	int len = sizeof(tArry) / sizeof(tArry[0]);
	//传递的是值
	allocatespace(tArry, len);
	std::cout << "\nHello World!\n";
}

