// MyCPP.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "MyCPP.h"
#include <iostream>
#define abs(x) ((x<0)?(-1)*(x):(x))


//记录每行皇后的位置，解的计数
static int queen[8] = { 0 }, Count = 0;
//打印皇后,棋盘摆放情况
void print() {
	for (size_t i = 0; i < 8; i++)
	{
		int position = queen[i];
		for (size_t i = 0; i < position; i++)
		{
			std::cout<< "0";
		}
		std::cout << "#";
		for (size_t i = 0; i < 7-position; i++)
		{
			std::cout << "0";
		}
		std::cout << std::endl;
	}

}

//判断逻辑
bool Check() {
	for (size_t i = 0; i < 8; i++)
	{
		int position = queen[i];
		//与其他7个位置比较
		for (size_t j = 0; j < 8; j++)
		{
			if (i==j)
			{
				continue;
			}
			//取相应位置
			int another = queen[j];
			if (position==another||abs(position-another)==abs(i-j))
			{
				return false;
			}
		}
	}
	return true;
}
//递归遍历所有可能
void Func(int* a, int n) {
	//a[n]的可能性，遍历所有可能。递归调用a[n-1]序号位置的可能性
	for (a[n] = 0; a[n] < 8; a[n]++)
	{
		if (n==0)
		{
			//递归调用到第0个位置。所以此时数组的前面位置已经全部有赋值
			if (Check())
			{
				print();
				Count++;
			}
		}
		else
		{
			Func(a, n - 1);
		}

	}

}

int main()
{
	//N参数为最大序号
	Func(queen, 7);
	std::cout << "总和计数为 " << Count << std::endl;
    return 1;
}

