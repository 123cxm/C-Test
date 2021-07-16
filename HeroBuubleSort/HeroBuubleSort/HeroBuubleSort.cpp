// HeroBuubleSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
//定义一个英雄结构体
struct Hero
{
	string name;
	int age;
	string sex;
};
void BubbleSort1(struct Hero hArry[] , int len)
{
	for (int i = 0; i < len-1; i++) //注意此处是嵌套循环
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//这样只交换了年龄，是不正确的
			if (hArry[j].age > hArry[j+1].age)
			{
				int temp;
				temp = hArry[j].age;
				hArry[j].age = hArry[j + 1].age;
				hArry[j + 1].age = temp;
			}
		}
	}
}
void BubbleSort2(struct Hero hArry[], int len)
{
	for (int i = 0; i < len - 1; i++) //注意此处是嵌套循环
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//这样才是全部位置交换了
			if (hArry[j].age > hArry[j + 1].age)
			{
				struct Hero temp;
				temp = hArry[j];
				hArry[j] = hArry[j + 1];
				hArry[j + 1] = temp;
			}
		}
	}
}
void PrintfHero(Hero hArry[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "英雄的名字是： " << hArry[i].name << "   英雄的年龄是： " << hArry[i].age << "  英雄的性别是： " << hArry[i].sex<<endl;
	}

}
int main()
{
	Hero hArry[5] = 
	{
		{"刘备",18,"男"},
		{"赵云",20,"男"},
		{"貂蝉",16,"女"},
		{"昭君",21,"女"},
		{"小乔",5,"女"},
	};
	int len = sizeof(hArry) / sizeof(hArry[0]);
	cout << "将英雄按照年龄进行冒泡排序前的顺序为" << endl;
	PrintfHero(hArry, len);
	cout << endl;
	
	BubbleSort1(hArry,len);
	cout << "只交换年龄冒泡排序后的顺序为" << endl;
	PrintfHero(hArry, len);
	cout << endl;
	
	BubbleSort2(hArry, len);
	cout << "正确交换后冒泡排序后的顺序为" << endl;
	PrintfHero(hArry, len);
}
