// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	//猜数字游戏
	int i=0 ;
	int t = 0;
	srand((unsigned int)time(NULL));
	int a = rand()%100;
	//cout << a << endl;

	cout << a << endl;
	while (i != a && t != 5)
	{
		cout << "  请输入数字：" << endl;
		cin >> i;
		if (i < a)
		{
			cout << "你输入的数字太小了！" << endl;
			t = t + 1;
			cout << "你只有" << 5 - t << "次机会了" << endl;
		}
		else if (i > a)
		{
			cout << "你输入的数字太大了！" << endl;
			t = t + 1;
			cout << "你只有" << 5 - t << "次机会了" << endl;
		}
	}
		if ( i!= a)
		{
			cout << "很遗憾你没有猜中！";
		}
		else
		{
			cout << "恭喜你猜中了！";
		}
	
		cout << endl;
	//do while 循环
	int j = 0;
	do
	{
		cout << "j=" << j<<endl;
		j++;
	} while (j < 20);
     
	

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
