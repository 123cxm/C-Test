// ConsoleApplication4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include "max.h"  
#include "BubbleSort.h"

/*void BubbleSort(int *arr, int len)

{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			int temp;
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
*/
void printfArr (int *arr, int len)
{
	for (int i = 0;  i < len;i++)
	{
		cout << arr[i] << "   ";
	}
 }
int main()
{
	//封装一个比较大小的函数
	int b = 20;	
	int a = 10;
	std::cout << "经过调用max函数后得到较大的值为："<<max(a,b)<<endl;
	//查看指针所占的内存
	int * p  = &a;
	cout << "指针的所占内存" << sizeof(int *) << endl;
	cout << "指针的所占内存" << sizeof(p) << endl;
	
	//利用指针遍历数组
	int brr[] = { 1,2,3,4,5,6,7,8,9 };
	int * p1 = brr;
	
	for (int i = 0; i < 9; i++)
	{
		cout <<"指针指向的数据为" << * p1 << endl;
		p1++;
	}
	
	//封装一个函数，利用冒泡排序实现整型数组的升序排序
	//创建一个数组
	int arr[10] = { 3,4,5,2,6,0,20,14,34,11 };
	cout << "\n冒泡前的数组为" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "   ";
	}
	//获取数组的长度
	int len = sizeof(arr)/sizeof(arr[0]);  
	//创建冒泡函数
	BubbleSort(arr , len);
	//打印数组
	cout << "\n冒泡后的数组为" << endl;
	printfArr (arr, len);
	
	system("pause");
	return 0;

	
}

