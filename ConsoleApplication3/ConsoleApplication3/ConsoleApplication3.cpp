// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	/*  水仙花问题  找出三位数的水仙花数
	int num = 100;
	do
	{
		int a = num % 10;//个位
		int b = num / 10 % 10;//十位
		int c = num / 100;//百位
		if (b*b*b + c*c*c + a*a*a == num)
		{
			cout << "num =" << num<<endl;
		}
		num++;
	} while (num < 1000);
	*/
	
	/* 敲桌子问题： 带有7 的个位、十位，7的倍数都输出敲桌子
	for ( int i=1;i <= 100; i++)
	{
		if (  i % 7 == 0 ||i%10==7 || i/10==7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
    }*/
	
	/*九九乘法表问题
	for (int j = 1; j < 10; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			cout <<i<< "*"<<j<<"="<<i*j<<"  ";
		}
		cout << endl;
	}*/
   
	/* 找出数组中的最大值问题
	int max = 0;
	int arr[5] = { 300,400,250,100,350 };
	for (int i = 0; i <= 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			
		}	
	}cout << max <<endl;
	*/

	/*逆置数组
	int a[5] ;
	int b[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "	请输入数字"<<endl;
		cin >> a[i];
	}
	cout << "你输入的数组为"<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}
    for (int i = 0; i < 5; i++)
	{
		b[i] = a[4 - i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout <<  b[i];
	}
	int start = 0;//起始位置
	int end = sizeof(a) / sizeof(a[0]) - 1;
	int temp = a[start];//临时
	while (start<end)
	{
		temp = a[start];//把开始的第一个值保存在临时变量中
		a[start] = a[end];//把最后一个值赋给首位位置
		a[end] = temp;//把首位位置赋给末位
		start++;
		end--;
	}
	cout << "你输入的数组为"<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}*/


    int arr[9] = { 2,4,5,1,7,44,6,9,20 };
	int temp = 0;
	cout << "冒泡前：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout  <<arr[i] <<"  ";
	}
	cout << endl;
	
	
	for (int a = 0; a < 8; a++)  //排序总轮次：总元素个数-1
	{
       for (int  j = 0; j < 8-a; j++) //每轮对比个数：元素个数-排序轮数
	   {
		if (arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	   }
	   a++;
	}
		
	cout << "冒泡后：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

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
